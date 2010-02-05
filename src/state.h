/*
 *  Copyright (c) 2006 Dell, Inc.
 *  by Matt Domsch <Matt_Domsch@dell.com>
 *  Licensed under the GNU General Public license, version 2.
 */
#ifndef LIBBIOSDEVICE_STATE_H_INCLUDED
#define LIBBIOSDEVICE_STATE_H_INCLUDED

#include "list.h"

struct libbiosdevname_state {
	struct list_head bios_devices;
	struct list_head pci_devices;
	struct list_head pcmcia_devices;
	struct list_head network_devices;
};

#endif /* LIBBIOSDEVICESTATE_H_INCLUDED */
