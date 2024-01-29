#include <windows.h>

// Define Success as 0
#define WINVERIFYTRUST_SUCCESS 0

// Define the function signature based on the original WinVerifyTrust
extern "C" __declspec(dllexport) LONG WinVerifyTrust(
    HWND hwnd,
    GUID *pgActionID,
    LPVOID pWVTData
) {
    // Return Success enum value
    return WINVERIFYTRUST_SUCCESS;
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}