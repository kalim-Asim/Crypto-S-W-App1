#ifndef CRYPTOHELPER_H
#define CRYPTOHELPER_H

#include <string>

namespace CryptoHelper {
    std::string generateAESKey();
    std::string encryptAES(const std::string &plain);
    std::string decryptAES(const std::string &cipher);
    std::string sha256(const std::string &data);
    std::string hmacSHA256(const std::string &data);
}

#endif // CRYPTOHELPER_H

