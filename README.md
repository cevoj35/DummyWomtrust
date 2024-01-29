# DummyWomtrust

Lightweight womtrust.dll dummy with WinVerifyTrust export that always returns Success.

## How to build

#### Getting build tools

Install mingw via [Chocolatey](https://chocolatey.org/install):
```
choco install mingw
```
#### Building

```
g++ -shared -o womtrust.dll womtrust_stub.cpp
```

Pre-built files also available in releases!