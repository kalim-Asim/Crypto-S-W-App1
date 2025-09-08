#include "cryptohelper.h"
#include <cryptopp/cryptlib.h>
#include <cryptopp/sha.h>
#include <cryptopp/hmac.h>
#include <cryptopp/aes.h>
#include <cryptopp/modes.h>
#include <cryptopp/filters.h>
#include <cryptopp/hex.h>
#include <cryptopp/osrng.h>

using namespace CryptoPP;

namespace CryptoHelper {

    // Generate random 256-bit AES key (hex string)
    std::string generateAESKey() {
        AutoSeededRandomPool prng;
        SecByteBlock key(AES::DEFAULT_KEYLENGTH); // 16 bytes
        prng.GenerateBlock(key, key.size());

        std::string encoded;
        StringSource ss(key, key.size(), true,
            new HexEncoder(new StringSink(encoded))
        );
        return encoded;
    }

    // AES Encrypt (ECB mode, for simplicity)
    std::string encryptAES(const std::string &plain) {
        AutoSeededRandomPool prng;
        SecByteBlock key(AES::DEFAULT_KEYLENGTH);
        prng.GenerateBlock(key, key.size());

        std::string cipher;
        ECB_Mode<AES>::Encryption enc(key, key.size());

        StringSource ss(plain, true,
            new StreamTransformationFilter(enc,
                new StringSink(cipher)
            )
        );
        return cipher;
    }

    // AES Decrypt (must use same key as encryption!)
    std::string decryptAES(const std::string &cipher) {
        AutoSeededRandomPool prng;
        SecByteBlock key(AES::DEFAULT_KEYLENGTH);
        prng.GenerateBlock(key, key.size());

        std::string recovered;
        ECB_Mode<AES>::Decryption dec(key, key.size());

        StringSource ss(cipher, true,
            new StreamTransformationFilter(dec,
                new StringSink(recovered)
            )
        );
        return recovered;
    }

    // SHA-256 digest (hex output)
    std::string sha256(const std::string &data) {
        std::string digest;
        SHA256 hash;

        StringSource ss(data, true,
            new HashFilter(hash,
                new HexEncoder(new StringSink(digest), false) // lowercase hex
            )
        );
        return digest;
    }

    // HMAC-SHA256 (hex output)
    std::string hmacSHA256(const std::string &data) {
        AutoSeededRandomPool prng;
        SecByteBlock key(16); // 128-bit random key
        prng.GenerateBlock(key, key.size());

        std::string mac;
        HMAC<SHA256> hmac(key, key.size());

        StringSource ss(data, true,
            new HashFilter(hmac,
                new HexEncoder(new StringSink(mac), false)
            )
        );
        return mac;
    }
}

