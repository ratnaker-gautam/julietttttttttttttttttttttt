/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#include <wincrypt.h>

/* a a a a a a a* a */
#pragma comment (lib, "Advapi32")

#ifndef OMITIEw

void HRoSzSlPOLoDGvIDGzpf_IEw()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            FILE *pFile;
            HCRYPTPROV hCryptProv;
            HCRYPTKEY hKey;
            HCRYPTHASH hHash;
            char password[100];
            size_t passwordLen;
            char toBeDecrypted[100];
            DWORD toBeDecryptedLen = sizeof(toBeDecrypted)-1;
            /* a a a a a a */
            printLine("Enter the password: ");
            if (fgets(password, 100, stdin) == NULL)
            {
                printLine("fgets() failed");
                /* a a a a a a */
                password[0] = '\0';
            }
            /* a a a a a a a a a a a a a
             * a a a */
            passwordLen = strlen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = '\0';
            }
            /* a a a a a a a a a */
            pFile = fopen("encrypted.txt", "rb");
            if (pFile == NULL)
            {
                exit(1);
            }
            if (fread(toBeDecrypted, sizeof(char), 100, pFile) != 100)
            {
                fclose(pFile);
                exit(1);
            }
            toBeDecrypted[99] = '\0';
            /* a a a a a a a a a a a a */
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
            {
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
                {
                    printLine("Error in acquiring cryptographic context");
                    exit(1);
                }
            }
            /* a a a */
            if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
            {
                printLine("Error in creating hash");
                exit(1);
            }
            /* a a a */
            if(!CryptHashData(hHash, (BYTE *) password, passwordLen, 0))
            {
                printLine("Error in hashing password");
                exit(1);
            }
            /* a a a a a a a a a */
            if(!CryptDeriveKey(hCryptProv, CALG_3DES, hHash, 0, &hKey))
            {
                printLine("Error in CryptDeriveKey");
                exit(1);
            }
            /* a a a a a */
            if(!CryptDecrypt(hKey, 0, 1, 0, (BYTE *)toBeDecrypted, &toBeDecryptedLen))
            {
                printLine("Error in decryption");
                exit(1);
            }
            /* a a a a a */
            toBeDecrypted[toBeDecryptedLen] = '\0';
            printLine(toBeDecrypted);
            /* a */
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
    else
    {
        {
            FILE *pFile;
            HCRYPTPROV hCryptProv;
            HCRYPTKEY hKey;
            HCRYPTHASH hHash;
            char password[100];
            size_t passwordLen;
            char toBeDecrypted[100];
            DWORD toBeDecryptedLen = sizeof(toBeDecrypted)-1;
            /* a a a a a a */
            printLine("Enter the password: ");
            if (fgets(password, 100, stdin) == NULL)
            {
                printLine("fgets() failed");
                /* a a a a a a */
                password[0] = '\0';
            }
            /* a a a a a a a a a a a a a
             * a a a */
            passwordLen = strlen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = '\0';
            }
            /* a a a a a a a a a */
            pFile = fopen("encrypted.txt", "rb");
            if (pFile == NULL)
            {
                exit(1);
            }
            if (fread(toBeDecrypted, sizeof(char), 100, pFile) != 100)
            {
                fclose(pFile);
                exit(1);
            }
            toBeDecrypted[99] = '\0';
            /* a a a a a a a a a a a a */
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
            {
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
                {
                    printLine("Error in acquiring cryptographic context");
                    exit(1);
                }
            }
            /* a a a */
            if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
            {
                printLine("Error in creating hash");
                exit(1);
            }
            /* a a a */
            if(!CryptHashData(hHash, (BYTE *) password, passwordLen, 0))
            {
                printLine("Error in hashing password");
                exit(1);
            }
            /* a a a a a a a a */
            if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
            {
                printLine("Error in CryptDeriveKey");
                exit(1);
            }
            /* a a a a */
            if(!CryptDecrypt(hKey, 0, 1, 0, (BYTE *)toBeDecrypted, &toBeDecryptedLen))
            {
                printLine("Error in decryption");
                exit(1);
            }
            /* a a a a a */
            toBeDecrypted[toBeDecryptedLen] = '\0';
            printLine(toBeDecrypted);
            /* a */
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}

#endif /* a */

#ifndef OMITgwz

/* a a a a a a a a a a a */
static void gwz1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            FILE *pFile;
            HCRYPTPROV hCryptProv;
            HCRYPTKEY hKey;
            HCRYPTHASH hHash;
            char password[100];
            size_t passwordLen;
            char toBeDecrypted[100];
            DWORD toBeDecryptedLen = sizeof(toBeDecrypted)-1;
            /* a a a a a a */
            printLine("Enter the password: ");
            if (fgets(password, 100, stdin) == NULL)
            {
                printLine("fgets() failed");
                /* a a a a a a */
                password[0] = '\0';
            }
            /* a a a a a a a a a a a a a
             * a a a */
            passwordLen = strlen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = '\0';
            }
            /* a a a a a a a a a */
            pFile = fopen("encrypted.txt", "rb");
            if (pFile == NULL)
            {
                exit(1);
            }
            if (fread(toBeDecrypted, sizeof(char), 100, pFile) != 100)
            {
                fclose(pFile);
                exit(1);
            }
            toBeDecrypted[99] = '\0';
            /* a a a a a a a a a a a a */
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
            {
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
                {
                    printLine("Error in acquiring cryptographic context");
                    exit(1);
                }
            }
            /* a a a */
            if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
            {
                printLine("Error in creating hash");
                exit(1);
            }
            /* a a a */
            if(!CryptHashData(hHash, (BYTE *) password, passwordLen, 0))
            {
                printLine("Error in hashing password");
                exit(1);
            }
            /* a a a a a a a a */
            if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
            {
                printLine("Error in CryptDeriveKey");
                exit(1);
            }
            /* a a a a */
            if(!CryptDecrypt(hKey, 0, 1, 0, (BYTE *)toBeDecrypted, &toBeDecryptedLen))
            {
                printLine("Error in decryption");
                exit(1);
            }
            /* a a a a a */
            toBeDecrypted[toBeDecryptedLen] = '\0';
            printLine(toBeDecrypted);
            /* a */
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
    else
    {
        {
            FILE *pFile;
            HCRYPTPROV hCryptProv;
            HCRYPTKEY hKey;
            HCRYPTHASH hHash;
            char password[100];
            size_t passwordLen;
            char toBeDecrypted[100];
            DWORD toBeDecryptedLen = sizeof(toBeDecrypted)-1;
            /* a a a a a a */
            printLine("Enter the password: ");
            if (fgets(password, 100, stdin) == NULL)
            {
                printLine("fgets() failed");
                /* a a a a a a */
                password[0] = '\0';
            }
            /* a a a a a a a a a a a a a
             * a a a */
            passwordLen = strlen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = '\0';
            }
            /* a a a a a a a a a */
            pFile = fopen("encrypted.txt", "rb");
            if (pFile == NULL)
            {
                exit(1);
            }
            if (fread(toBeDecrypted, sizeof(char), 100, pFile) != 100)
            {
                fclose(pFile);
                exit(1);
            }
            toBeDecrypted[99] = '\0';
            /* a a a a a a a a a a a a */
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
            {
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
                {
                    printLine("Error in acquiring cryptographic context");
                    exit(1);
                }
            }
            /* a a a */
            if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
            {
                printLine("Error in creating hash");
                exit(1);
            }
            /* a a a */
            if(!CryptHashData(hHash, (BYTE *) password, passwordLen, 0))
            {
                printLine("Error in hashing password");
                exit(1);
            }
            /* a a a a a a a a */
            if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
            {
                printLine("Error in CryptDeriveKey");
                exit(1);
            }
            /* a a a a */
            if(!CryptDecrypt(hKey, 0, 1, 0, (BYTE *)toBeDecrypted, &toBeDecryptedLen))
            {
                printLine("Error in decryption");
                exit(1);
            }
            /* a a a a a */
            toBeDecrypted[toBeDecryptedLen] = '\0';
            printLine(toBeDecrypted);
            /* a */
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}

void HRoSzSlPOLoDGvIDGzpf_gwz()
{
    gwz1();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITgwz
    printLine("Calling gwz()...");
    HRoSzSlPOLoDGvIDGzpf_gwz();
    printLine("Finished gwz()");
#endif /* a */
#ifndef OMITIEw
    printLine("Calling IEw()...");
    HRoSzSlPOLoDGvIDGzpf_IEw();
    printLine("Finished IEw()");
#endif /* a */
    return 0;
}

#endif
