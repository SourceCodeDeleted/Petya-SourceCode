#pragma once

#include <dhcpsapi.h>
#include <windows.h>

/*
They are structs that are needing resolution.
Not all will probably be fixed.

*/


typedef struct _PROCESS_INFORMATION {


};

typedef struct _STARTUPINFOW {



};


typedef struct _STARTUPINFOW {


};
typedef struct _PROCESS_INFORMATION {


};

typedef struct _SYSTEMTIME {


};

typedef struct _DHCP_SUBNET_INFO { // this will need clean up leater.
	DHCP_IP_ADDRESS SubnetAddress;
	DHCP_IP_MASK SubnetMask;
	LPWSTR SubnetName;
	LPWSTR SubnetComment;
	DHCP_HOST_INFO PrimaryHost;
	DHCP_SUBNET_STATE SubnetState;
} DHCP_SUBNET_INFO,
*LPDHCP_SUBNET_INFO;