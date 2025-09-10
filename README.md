🛡️ Crypto-App

A desktop application built with Crypto++ for performing essential cryptographic operations through a simple GUI interface.

The app allows users to securely encrypt/decrypt files, generate symmetric keys, compute SHA-256 digests, and HMAC values, all without dealing with command-line complexity.

✨ Features

🔑 Symmetric-Key Generation
Automatically generates a secure AES key.

🔒 AES Encryption
Encrypt uploaded files using AES.

🔓 AES Decryption
Decrypt encrypted files back to their original form.

📝 SHA-256 Digest Generation
Generate SHA-256 hash of any file or text input.

🔐 HMAC Digest Generation
Generate secure message authentication codes with SHA-256.

🖥️ GUI Overview

The desktop application provides a user-friendly interface:

📂 Upload Button → Select input file.

▶️ Process Button → Perform selected cryptographic operation.

💾 Download Button → Save the processed output.

📊 Status Label/Text → Displays progress or errors.

⏳ Progress Bar (optional) → For large files.

Example Workflow

Upload a file.

Select operation (Encrypt, Decrypt, Hash, etc.).

Click Process.

View results directly in the app (for digests) or download processed file.

⚙️ Configuration

All configurable parameters (e.g., AES key size, HMAC settings, etc.) are stored in a single file:

/config/config.json


The GUI does not expose advanced options — everything is handled via the configuration file to keep the interface simple.

📂 Project Structure
Crypto-app/
│
├── config/                 # Configuration files
│   └── config.json
│
├── src/                    # Source code
│   ├── gui/                # GUI-related code
│   ├── crypto/             # Crypto++ wrappers
│   └── main.cpp
│
├── assets/                 # Icons, UI assets
├── build/                  # Build output
├── README.md               # Project documentation
└── LICENSE                 # License file

🚀 Getting Started
🔧 Prerequisites

CMake (>= 3.10)

Crypto++ library

Qt5/Qt6 (for GUI)

C++17 compatible compiler

⚙️ Build Instructions
# Clone the repository
git clone https://github.com/kalim-Asim/Crypto-app.git
cd Crypto-app

# Create build directory
mkdir build && cd build

# Run CMake
cmake ..

# Build the project
cmake --build .

▶️ Run the Application
./CryptoApp

📸 Screenshots (Optional)

Add screenshots here once GUI is finalized

📖 Documentation

Crypto++ Library Docs: https://cryptopp.com/docs/

Qt Docs (GUI): https://doc.qt.io/

🛠️ Tech Stack

C++17

Crypto++ (for cryptographic operations)

Qt (for GUI framework)

CMake (build system)

🤝 Contributing

Contributions are welcome!

Fork the repository

Create your feature branch (git checkout -b feature/new-feature)

Commit your changes (git commit -m "Add new feature")

Push to the branch (git push origin feature/new-feature)

Create a Pull Request

📜 License

This project is licensed under the MIT License. See LICENSE
 for details.

👨‍💻 Author

Asim Kalim
🔗 GitHub Profile
