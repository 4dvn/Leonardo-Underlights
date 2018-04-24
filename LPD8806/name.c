#include "usb_names.h"

#define MIDI_NAME {'L','P','D','8','8','0','6',' ','(','T','e','e','n','s','y',' ','L','C',')',}
#define MIDI_NAME_LEN 19

struct usb_string_descriptor_struct usb_string_product_name = {2 + MIDI_NAME_LEN * 2, 3, MIDI_NAME};
