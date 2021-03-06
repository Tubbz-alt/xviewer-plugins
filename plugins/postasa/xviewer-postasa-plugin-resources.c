#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.xviewer_postasa_plugin"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2436]; const double alignment; void * const ptr;}  xviewer_postasa_plugin_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
  0xb0, 0xb7, 0x24, 0x30, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 0x06, 0x00, 0x4c, 0x00, 
  0x08, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 
  0x12, 0x3a, 0xa0, 0x09, 0x07, 0x00, 0x00, 0x00, 
  0x0c, 0x01, 0x00, 0x00, 0x12, 0x00, 0x76, 0x00, 
  0x20, 0x01, 0x00, 0x00, 0x2f, 0x05, 0x00, 0x00, 
  0x9a, 0x57, 0x52, 0x9e, 0x00, 0x00, 0x00, 0x00, 
  0x2f, 0x05, 0x00, 0x00, 0x04, 0x00, 0x4c, 0x00, 
  0x34, 0x05, 0x00, 0x00, 0x38, 0x05, 0x00, 0x00, 
  0xab, 0xf9, 0x62, 0x1c, 0x02, 0x00, 0x00, 0x00, 
  0x38, 0x05, 0x00, 0x00, 0x08, 0x00, 0x4c, 0x00, 
  0x40, 0x05, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 
  0x4b, 0x50, 0x90, 0x0b, 0x06, 0x00, 0x00, 0x00, 
  0x44, 0x05, 0x00, 0x00, 0x04, 0x00, 0x4c, 0x00, 
  0x48, 0x05, 0x00, 0x00, 0x4c, 0x05, 0x00, 0x00, 
  0x14, 0x3c, 0x75, 0x9d, 0x07, 0x00, 0x00, 0x00, 
  0x4c, 0x05, 0x00, 0x00, 0x13, 0x00, 0x76, 0x00, 
  0x60, 0x05, 0x00, 0x00, 0x6f, 0x09, 0x00, 0x00, 
  0xd4, 0xb5, 0x02, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x6f, 0x09, 0x00, 0x00, 0x01, 0x00, 0x4c, 0x00, 
  0x70, 0x09, 0x00, 0x00, 0x74, 0x09, 0x00, 0x00, 
  0x35, 0x70, 0x64, 0x09, 0x03, 0x00, 0x00, 0x00, 
  0x74, 0x09, 0x00, 0x00, 0x08, 0x00, 0x4c, 0x00, 
  0x7c, 0x09, 0x00, 0x00, 0x84, 0x09, 0x00, 0x00, 
  0x67, 0x6e, 0x6f, 0x6d, 0x65, 0x2f, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x70, 0x6f, 0x73, 0x74, 
  0x61, 0x73, 0x61, 0x2d, 0x63, 0x6f, 0x6e, 0x66, 
  0x69, 0x67, 0x2e, 0x78, 0x6d, 0x6c, 0x00, 0x00, 
  0xfe, 0x15, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x58, 0xcd, 0x52, 0xdb, 0x30, 
  0x10, 0xbe, 0xf3, 0x14, 0x1e, 0x5d, 0x3b, 0xc1, 
  0x49, 0x28, 0xb4, 0xd3, 0x71, 0xcc, 0x4c, 0x7f, 
  0xa0, 0x07, 0x0e, 0xcc, 0x14, 0xda, 0xa3, 0x46, 
  0x96, 0x37, 0xb6, 0x8a, 0x22, 0xb9, 0x92, 0x1c, 
  0x30, 0x2f, 0xd1, 0x63, 0xdf, 0xaf, 0x4f, 0x52, 
  0xd9, 0x4e, 0x0c, 0x71, 0x82, 0x95, 0x09, 0x69, 
  0x06, 0x68, 0x8f, 0x96, 0x57, 0xbb, 0xdf, 0xb7, 
  0xbb, 0xfa, 0xb4, 0x76, 0x70, 0x7c, 0x33, 0xe1, 
  0xde, 0x14, 0x94, 0x66, 0x52, 0x8c, 0xd0, 0x60, 
  0xbf, 0x8f, 0x3c, 0x10, 0x54, 0xc6, 0x4c, 0x24, 
  0x23, 0x74, 0x79, 0x71, 0xd2, 0x7b, 0x8b, 0x8e, 
  0xc3, 0xbd, 0x80, 0x09, 0x03, 0x6a, 0x4c, 0x28, 
  0x84, 0x81, 0x82, 0x1f, 0x39, 0x53, 0xa0, 0x3d, 
  0xce, 0xa2, 0x11, 0x4a, 0xcc, 0xd5, 0x2b, 0x74, 
  0xe7, 0x60, 0xb8, 0x3f, 0x38, 0x42, 0x7e, 0x18, 
  0xc8, 0xe8, 0x3b, 0x50, 0xe3, 0x51, 0x4e, 0xb4, 
  0x1e, 0xa1, 0x53, 0x73, 0xf5, 0x91, 0x11, 0x2e, 
  0x13, 0xe4, 0xb1, 0x78, 0x84, 0x32, 0xa9, 0x0d, 
  0xd1, 0x04, 0xdb, 0x05, 0x26, 0x70, 0x5c, 0xbf, 
  0x09, 0x83, 0x4c, 0xc9, 0x0c, 0x94, 0x29, 0x3c, 
  0x41, 0x26, 0x30, 0x42, 0x29, 0xb0, 0x24, 0x35, 
  0xb8, 0x0c, 0x07, 0xda, 0xa0, 0x70, 0x70, 0xd8, 
  0x0f, 0xfc, 0xb9, 0xcd, 0x92, 0x35, 0x25, 0x02, 
  0x8f, 0x25, 0xcd, 0x35, 0x0a, 0x4f, 0x08, 0xd7, 
  0xd0, 0x61, 0x1a, 0x49, 0x15, 0x83, 0xc2, 0xd7, 
  0x2c, 0x36, 0x29, 0x0a, 0x0f, 0x3b, 0x2c, 0x0d, 
  0x33, 0x1c, 0x90, 0x67, 0x14, 0x11, 0x9a, 0x13, 
  0x43, 0x22, 0x6e, 0x17, 0x0b, 0xb0, 0x31, 0xce, 
  0x19, 0xb5, 0x0c, 0xbe, 0x41, 0xe4, 0x9d, 0x95, 
  0x24, 0x3a, 0x7c, 0xd8, 0x4c, 0xb1, 0xdb, 0x72, 
  0xa7, 0x1b, 0x98, 0x29, 0x32, 0xc0, 0xa9, 0x4d, 
  0x35, 0x0a, 0xeb, 0xa4, 0x74, 0xd8, 0xc6, 0xc0, 
  0xc1, 0x3c, 0xe0, 0x96, 0xa6, 0x8c, 0xc7, 0x5e, 
  0x55, 0x32, 0x41, 0x78, 0xaf, 0x7a, 0x1c, 0xa1, 
  0x69, 0x24, 0x6f, 0xd0, 0x8a, 0xca, 0xbc, 0xb7, 
  0xcb, 0x55, 0x59, 0xea, 0x98, 0x78, 0x66, 0xd7, 
  0x8a, 0x37, 0x65, 0x9a, 0x55, 0xd1, 0x2e, 0x54, 
  0x0e, 0xdb, 0xa9, 0x83, 0x54, 0x0c, 0x84, 0x21, 
  0xc6, 0x36, 0x0e, 0x0a, 0x6d, 0x07, 0x19, 0x9b, 
  0x53, 0xde, 0x61, 0xaf, 0x33, 0x42, 0x6d, 0x5b, 
  0xa2, 0x70, 0xe8, 0x26, 0x4b, 0x68, 0xe9, 0x16, 
  0x13, 0x05, 0x64, 0x25, 0xe7, 0xdc, 0x18, 0x29, 
  0x1a, 0xe6, 0x51, 0xf5, 0x88, 0x77, 0x45, 0x9c, 
  0x93, 0x42, 0xe6, 0x06, 0x6b, 0x53, 0x94, 0x7e, 
  0x41, 0xc4, 0x4b, 0x7c, 0x1e, 0x84, 0x5c, 0xe3, 
  0xb5, 0xb1, 0x28, 0x70, 0x5c, 0xc3, 0x46, 0x2b, 
  0xfc, 0x47, 0xc0, 0x57, 0xb6, 0x2d, 0xfe, 0x50, 
  0xed, 0xec, 0xc0, 0xb6, 0x01, 0x5d, 0x87, 0xa5, 
  0x02, 0x0a, 0x6c, 0x0a, 0x1a, 0xc7, 0x30, 0x26, 
  0x39, 0x37, 0xce, 0x0d, 0xb9, 0x06, 0x3c, 0xaf, 
  0x5f, 0x96, 0x01, 0x51, 0x25, 0x66, 0x77, 0x56, 
  0xcb, 0x6d, 0xb9, 0xb0, 0x27, 0x9b, 0x33, 0xb1, 
  0x02, 0xbf, 0x5f, 0x67, 0xd4, 0x6e, 0x23, 0xf4, 
  0xca, 0xb6, 0xd1, 0xd2, 0x7e, 0xb8, 0xc9, 0x88, 
  0x88, 0xdd, 0x71, 0xc6, 0x8c, 0x73, 0xb7, 0x95, 
  0xd5, 0x38, 0x56, 0x77, 0xf6, 0x82, 0x6a, 0xf9, 
  0x4d, 0x74, 0x7f, 0x56, 0xe8, 0x75, 0xea, 0x5d, 
  0x0b, 0xe5, 0x06, 0xe5, 0x76, 0x89, 0xd3, 0xff, 
  0x6a, 0x6f, 0xbb, 0xda, 0x83, 0xee, 0x6a, 0x6f, 
  0x19, 0x97, 0x23, 0xb7, 0x65, 0x10, 0x5c, 0xde, 
  0x2a, 0x4b, 0x2a, 0xb3, 0xed, 0x6e, 0xfd, 0xda, 
  0x68, 0xe9, 0xac, 0x57, 0x77, 0x24, 0xa5, 0xcd, 
  0x9d, 0x70, 0xb4, 0x8e, 0x86, 0x7e, 0x6e, 0x50, 
  0xda, 0xf6, 0x51, 0xa5, 0x07, 0x9c, 0xae, 0x44, 
  0x5a, 0xcd, 0x06, 0x77, 0xa3, 0xc7, 0x41, 0xbf, 
  0xbf, 0xdd, 0x43, 0xb4, 0x36, 0xad, 0xc1, 0x70, 
  0x1d, 0x5e, 0x67, 0xb5, 0x02, 0x2c, 0x10, 0xab, 
  0x55, 0xc1, 0xc5, 0xec, 0x68, 0xc7, 0xc4, 0x3a, 
  0xb4, 0xea, 0x72, 0x86, 0xfc, 0xdd, 0xe6, 0xa7, 
  0xbe, 0x65, 0x3d, 0x11, 0x30, 0x91, 0x82, 0xd1, 
  0x72, 0xd4, 0x4b, 0xc0, 0xb2, 0x6d, 0x92, 0x63, 
  0xe7, 0x0e, 0x55, 0x6c, 0xa4, 0x17, 0x8e, 0x90, 
  0xeb, 0x1d, 0xcb, 0xc7, 0x9e, 0xb6, 0x4f, 0x25, 
  0xfc, 0x56, 0xbd, 0x2b, 0x4a, 0xce, 0x7a, 0x0f, 
  0x5f, 0xf7, 0x77, 0x7a, 0x1d, 0x30, 0x31, 0xf3, 
  0x89, 0x69, 0x4a, 0x14, 0x0a, 0x7f, 0xff, 0xfa, 
  0xf9, 0x04, 0xd2, 0xbe, 0x5b, 0x91, 0xde, 0xda, 
  0xe5, 0xe1, 0x96, 0xb5, 0xcc, 0x2e, 0x5d, 0xdb, 
  0xcf, 0x9b, 0x17, 0x27, 0x6b, 0x0d, 0xb1, 0x67, 
  0x27, 0x6b, 0xe7, 0x33, 0xe4, 0x7f, 0x51, 0xd6, 
  0x9a, 0xe4, 0xbc, 0x1c, 0x59, 0x5b, 0xa4, 0xf4, 
  0xe4, 0x64, 0xad, 0xf2, 0xc8, 0x38, 0x33, 0x85, 
  0xbb, 0x37, 0x1c, 0x12, 0xd8, 0x69, 0x8d, 0x35, 
  0x98, 0x47, 0x0c, 0xb7, 0xff, 0x86, 0x6a, 0x0e, 
  0x37, 0xeb, 0xb6, 0x7b, 0xea, 0x52, 0xcf, 0xac, 
  0x13, 0xd0, 0x9a, 0x24, 0xb0, 0x93, 0xb9, 0xb5, 
  0xc8, 0x88, 0xcd, 0xc4, 0x9b, 0x27, 0x50, 0xd5, 
  0x83, 0xe7, 0x79, 0x17, 0x36, 0xb8, 0xe6, 0x0b, 
  0xf5, 0x37, 0x64, 0xaf, 0xd6, 0x44, 0xdd, 0x7a, 
  0xf6, 0x14, 0xe8, 0x4c, 0x0a, 0x6d, 0x23, 0xf4, 
  0x51, 0xb8, 0xf0, 0xfb, 0x24, 0xf0, 0x17, 0x2c, 
  0x1f, 0xde, 0xd8, 0x1b, 0xa0, 0xf0, 0xfe, 0x87, 
  0xf8, 0xd2, 0x46, 0xbf, 0x0d, 0xa1, 0xc1, 0xb8, 
  0xd4, 0x7b, 0x5f, 0xd8, 0x2d, 0x9c, 0x2a, 0x99, 
  0x67, 0x75, 0xff, 0x55, 0x22, 0x87, 0xb5, 0x5d, 
  0x4c, 0xaa, 0xc5, 0x30, 0x68, 0x7c, 0xcc, 0x60, 
  0x34, 0xf7, 0xc4, 0xfd, 0x61, 0xcf, 0x6f, 0xbd, 
  0x6e, 0x89, 0xa6, 0x7d, 0xed, 0x2f, 0x63, 0xf1, 
  0xef, 0x7e, 0xe5, 0xee, 0xfd, 0x01, 0x1b, 0x8a, 
  0x1c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x65, 
  0x6f, 0x67, 0x2f, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x70, 0x6c, 0x75, 0x67, 0x69, 0x6e, 0x73, 0x2f, 
  0x07, 0x00, 0x00, 0x00, 0x6f, 0x72, 0x67, 0x2f, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x6f, 0x73, 0x74, 
  0x61, 0x73, 0x61, 0x2d, 0x75, 0x70, 0x6c, 0x6f, 
  0x61, 0x64, 0x73, 0x2e, 0x78, 0x6d, 0x6c, 0x00, 
  0x12, 0x12, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x58, 0x5b, 0x6f, 0xda, 0x30, 
  0x14, 0x7e, 0xef, 0xaf, 0xc8, 0xfc, 0x3a, 0x31, 
  0x0a, 0x53, 0xfb, 0x30, 0x05, 0x57, 0x6b, 0xa5, 
  0xb6, 0x0f, 0x95, 0x36, 0xad, 0xdd, 0xf6, 0x18, 
  0x39, 0xc9, 0x81, 0x78, 0x98, 0x38, 0xb3, 0x1d, 
  0x08, 0xfb, 0xf5, 0x3b, 0x89, 0x21, 0x40, 0x93, 
  0xe6, 0x02, 0xdd, 0xa4, 0x49, 0x7b, 0x23, 0xf6, 
  0xb9, 0x7c, 0xe7, 0xf2, 0x9d, 0x63, 0xe1, 0x5e, 
  0x65, 0x0b, 0xe1, 0x2c, 0x41, 0x69, 0x2e, 0xe3, 
  0x09, 0x19, 0xbd, 0x3b, 0x27, 0x57, 0xf4, 0xcc, 
  0xe5, 0xb1, 0x01, 0x35, 0x65, 0x01, 0x50, 0x57, 
  0xc1, 0xcf, 0x94, 0x2b, 0xd0, 0x8e, 0xe0, 0xfe, 
  0x84, 0xcc, 0xcc, 0xfc, 0x2d, 0xd9, 0xc9, 0x8f, 
  0xdf, 0x8d, 0x2e, 0xc9, 0x90, 0xba, 0x6f, 0x06, 
  0x03, 0xa7, 0xd4, 0x19, 0xc4, 0x6c, 0xc1, 0xe3, 
  0xd9, 0x20, 0x91, 0x82, 0x07, 0x6b, 0x27, 0x51, 
  0xf2, 0x07, 0x04, 0x66, 0xb0, 0xe2, 0x21, 0x38, 
  0x83, 0x01, 0x75, 0xa5, 0x9f, 0x7f, 0x3b, 0x81, 
  0x60, 0x5a, 0x4f, 0xc8, 0x9d, 0x99, 0x3f, 0x70, 
  0x6d, 0x1e, 0x8d, 0x54, 0x40, 0x1c, 0x1e, 0x4e, 
  0x48, 0x9a, 0x08, 0xc9, 0x42, 0xed, 0xe9, 0xe2, 
  0x88, 0xba, 0x81, 0x14, 0xe9, 0x22, 0xd6, 0xd6, 
  0x8b, 0xfd, 0xc8, 0x5d, 0x80, 0x63, 0xa2, 0x74, 
  0xe1, 0xc7, 0x8c, 0x8b, 0xc2, 0xac, 0xbd, 0x71, 
  0xcc, 0x3a, 0x01, 0xb4, 0x1a, 0xce, 0x3f, 0xf3, 
  0xcc, 0x4f, 0xa7, 0x5b, 0x74, 0xfb, 0x7a, 0x53, 
  0x2e, 0x20, 0x61, 0x26, 0xaa, 0xaa, 0xcd, 0x82, 
  0x88, 0x29, 0xa6, 0x14, 0x5b, 0xd7, 0xe9, 0x69, 
  0xfe, 0x0b, 0xfa, 0xea, 0xd8, 0x60, 0x30, 0x16, 
  0x66, 0x52, 0x5d, 0xa3, 0x9c, 0x62, 0xda, 0xea, 
  0xf4, 0x02, 0x16, 0x07, 0x20, 0x04, 0xf3, 0x45, 
  0x8d, 0xcb, 0xbb, 0x4f, 0x45, 0x0a, 0x1b, 0xfc, 
  0x2d, 0x40, 0x6b, 0x36, 0x6b, 0x45, 0x3b, 0x2c, 
  0x73, 0x3b, 0xb4, 0x55, 0xa9, 0xa9, 0xce, 0x77, 
  0x1e, 0x87, 0x72, 0x75, 0x58, 0x9a, 0x95, 0x3d, 
  0xa3, 0x2e, 0x16, 0x37, 0x01, 0x65, 0xd6, 0x4e, 
  0xee, 0x7c, 0x42, 0xb0, 0xc6, 0x26, 0xf2, 0xf2, 
  0x96, 0x01, 0x6d, 0x08, 0xbd, 0xb8, 0x38, 0x77, 
  0x87, 0x5b, 0x91, 0x8a, 0x70, 0x04, 0x7c, 0x16, 
  0x99, 0x9d, 0xf4, 0xf8, 0x50, 0x3a, 0x88, 0xb8, 
  0x08, 0x6b, 0xf0, 0xdc, 0x5f, 0xcb, 0xcc, 0xa2, 
  0x89, 0x7c, 0x99, 0x8d, 0xaa, 0x20, 0x96, 0x5c, 
  0x73, 0x4c, 0x1b, 0xa1, 0x4f, 0x2a, 0x85, 0x2e, 
  0x16, 0xbf, 0x95, 0x16, 0x97, 0x68, 0x71, 0xdc, 
  0xc3, 0xe2, 0x33, 0x39, 0xa9, 0x38, 0xc4, 0x58, 
  0x69, 0xe4, 0x06, 0xa1, 0x48, 0x12, 0xc3, 0x03, 
  0x26, 0xba, 0x20, 0x78, 0x60, 0x3e, 0x88, 0xc3, 
  0x14, 0x8b, 0xe2, 0xa8, 0x35, 0x69, 0x4d, 0x09, 
  0xee, 0x0a, 0x3b, 0x63, 0x82, 0xcf, 0xe2, 0x66, 
  0x5b, 0xeb, 0x84, 0x85, 0x84, 0x8e, 0x9a, 0x44, 
  0x2c, 0x62, 0xc7, 0x28, 0x16, 0x6b, 0xc1, 0x4c, 
  0xde, 0xba, 0xa8, 0x07, 0x9a, 0xd0, 0xaf, 0x36, 
  0xa6, 0x0f, 0xfb, 0xca, 0x65, 0xc3, 0x25, 0x2c, 
  0x98, 0xe3, 0xb8, 0xa8, 0x98, 0x83, 0x2c, 0x61, 
  0x31, 0xfa, 0xbc, 0x65, 0x42, 0x37, 0xa1, 0x47, 
  0x36, 0x8b, 0x76, 0xa9, 0x44, 0x6a, 0x6e, 0xeb, 
  0x72, 0x10, 0xc2, 0xb0, 0xf4, 0x3e, 0xdc, 0xd4, 
  0xe6, 0xa5, 0x12, 0x3d, 0x06, 0x4a, 0x0a, 0x01, 
  0xe1, 0x3e, 0x1d, 0xf4, 0xe6, 0xcc, 0xd2, 0x61, 
  0x74, 0x7c, 0xe3, 0x20, 0xdb, 0xbd, 0xa9, 0x0c, 
  0x52, 0xdd, 0x2a, 0x19, 0x59, 0x9f, 0x3e, 0x53, 
  0x9e, 0x9d, 0xaf, 0x84, 0xc6, 0x80, 0xad, 0xd6, 
  0xd4, 0x06, 0x55, 0x15, 0x96, 0x1a, 0xb9, 0xc0, 
  0x3e, 0x0d, 0x3a, 0xd1, 0x83, 0xc3, 0x2a, 0x91, 
  0xca, 0x6c, 0x28, 0xb2, 0xf9, 0x3a, 0x21, 0x5a, 
  0xdc, 0x26, 0x38, 0x49, 0xbd, 0x85, 0x0c, 0x51, 
  0x16, 0xfb, 0xb8, 0x1b, 0x4b, 0x9f, 0x14, 0x40, 
  0x0e, 0xe5, 0x90, 0x26, 0x39, 0x9c, 0xbf, 0x91, 
  0xf7, 0x1c, 0x2c, 0xb6, 0xd9, 0xc1, 0x6e, 0xea, 
  0x83, 0xfa, 0xa6, 0x18, 0xb4, 0x16, 0x7b, 0xbe, 
  0x7f, 0x3c, 0x9c, 0xbc, 0x55, 0xdc, 0x86, 0x1b, 
  0x44, 0x5d, 0x47, 0xa1, 0x5b, 0xd4, 0x69, 0x80, 
  0xb7, 0x25, 0x4b, 0xd7, 0x91, 0x77, 0x83, 0xbb, 
  0xe5, 0x0b, 0xc4, 0x21, 0x28, 0x50, 0x9b, 0x45, 
  0x59, 0x40, 0x2b, 0x57, 0xaa, 0x97, 0x6f, 0x9f, 
  0x7c, 0x45, 0x30, 0x63, 0x14, 0xf7, 0x53, 0x03, 
  0x7a, 0xef, 0xf7, 0x96, 0x54, 0x56, 0x33, 0xa7, 
  0x54, 0x79, 0x45, 0xf7, 0x7e, 0xeb, 0x76, 0x5a, 
  0xed, 0x03, 0x79, 0x82, 0xcc, 0xec, 0x32, 0x94, 
  0x6f, 0x68, 0x8b, 0xa2, 0x1a, 0xad, 0x10, 0x3c, 
  0xc9, 0x7b, 0x88, 0x50, 0x5c, 0xac, 0xca, 0xd4, 
  0xce, 0x95, 0x26, 0xe0, 0x26, 0xf7, 0x44, 0x47, 
  0xed, 0xb0, 0x4b, 0x6b, 0x6d, 0x71, 0xd4, 0xd5, 
  0xb9, 0xe8, 0xf2, 0xda, 0x3a, 0xe3, 0x0d, 0x0e, 
  0x1d, 0x42, 0xa7, 0x3c, 0x83, 0xb0, 0x71, 0xb6, 
  0xe1, 0xbd, 0x57, 0x6c, 0x55, 0x42, 0x2f, 0x9b, 
  0x86, 0xef, 0xcb, 0x9d, 0xf3, 0x88, 0x28, 0xfa, 
  0xb6, 0xc4, 0xae, 0x12, 0x36, 0x86, 0x0e, 0xbd, 
  0x60, 0x53, 0x3a, 0xfe, 0xc3, 0x29, 0xc5, 0x30, 
  0x66, 0x38, 0x3e, 0x74, 0x7d, 0x5a, 0xf1, 0xd9, 
  0xb9, 0x4d, 0xd6, 0xe8, 0xd8, 0x6c, 0x15, 0x0f, 
  0xb5, 0xde, 0x14, 0xda, 0xc0, 0x7a, 0x0e, 0xb2, 
  0x0b, 0x87, 0x52, 0x5c, 0x5c, 0x84, 0xbe, 0x3f, 
  0x48, 0x5c, 0x7d, 0x72, 0x2f, 0x8e, 0x48, 0x6e, 
  0x8f, 0x83, 0x97, 0x16, 0xf1, 0x6e, 0x75, 0x8e, 
  0x8e, 0x5b, 0x9d, 0x87, 0x2f, 0xb6, 0xf1, 0x2b, 
  0xbc, 0xd8, 0xee, 0xaf, 0x53, 0x63, 0x64, 0xbc, 
  0x67, 0xb7, 0xf8, 0xee, 0xf9, 0x1e, 0x7c, 0x4e, 
  0x4a, 0x0c, 0xa8, 0x60, 0x65, 0xcb, 0x2b, 0x67, 
  0x2d, 0x53, 0x83, 0x0b, 0x60, 0x9d, 0x9b, 0xc4, 
  0xfa, 0x77, 0xc1, 0x6b, 0xe1, 0x5a, 0xac, 0xf6, 
  0x65, 0xef, 0x59, 0xc4, 0xa4, 0xc7, 0x2b, 0xea, 
  0xa6, 0x50, 0x74, 0x1e, 0x41, 0xa0, 0xf1, 0xc6, 
  0xb1, 0xf1, 0xfa, 0xeb, 0x4f, 0x41, 0x00, 0x7c, 
  0x09, 0xda, 0x0b, 0x61, 0xca, 0x52, 0x61, 0xaa, 
  0x0a, 0xff, 0xda, 0x7b, 0xae, 0xa6, 0x24, 0x4c, 
  0x9c, 0x50, 0x96, 0x8f, 0x42, 0xfc, 0xaf, 0x48, 
  0xa7, 0x31, 0xd1, 0x63, 0xe0, 0x9c, 0x9f, 0x68, 
  0xe9, 0x95, 0x23, 0x64, 0x61, 0xd8, 0x3e, 0x20, 
  0x76, 0xe8, 0xc7, 0xa7, 0xe6, 0xa1, 0xa7, 0xbf, 
  0xae, 0xd9, 0xaa, 0x1e, 0xec, 0xfe, 0xef, 0x39, 
  0xfb, 0x0d, 0x95, 0x2f, 0x90, 0x33, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x2f, 
  0x04, 0x00, 0x00, 0x00, 0x70, 0x6f, 0x73, 0x74, 
  0x61, 0x73, 0x61, 0x2f, 0x01, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { xviewer_postasa_plugin_resource_data.data, sizeof (xviewer_postasa_plugin_resource_data.data), NULL, NULL, NULL };
G_GNUC_INTERNAL GResource *xviewer_postasa_plugin_get_resource (void);
GResource *xviewer_postasa_plugin_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif


#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
