# Commands to run

1. Install library
```
sudo apt-get install libcrypto++-dev
sudo apt-get install libcrypto++6 libcrypto++-utils libcrypto++-dev libcrypto++-doc libcrypto++6
sudo apt-get install qt6-base-dev qt6-base-dev-tools qt6-tools-dev qt6-tools-dev-tools
sudo apt-get install libcrypto++-dev libcrypto++-doc libcrypto++-utils
```

2. Check if installed
```
Sudo apt-cache pkgnames | grep -i crypto++
```

3. Setup
```
cd Crypto-S-W-App1/
qmake
make
./CryptoQtApp

mkdir build && cd build
cmake ..
make -j4
./CryptoQtApp
```
