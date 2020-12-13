#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NOT_SMS
#define LV_ATTRIBUTE_IMG_NOT_SMS
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NOT_SMS uint8_t not_sms_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0x05, 0x1e, 0x22, 0xff, 	/*Color of index 1*/
  0x16, 0x52, 0x5c, 0xff, 	/*Color of index 2*/
  0x1b, 0x7b, 0x85, 0xff, 	/*Color of index 3*/
  0x31, 0xab, 0xc7, 0xff, 	/*Color of index 4*/
  0x3f, 0xda, 0xfd, 0xff, 	/*Color of index 5*/
  0x55, 0xe1, 0xfd, 0xff, 	/*Color of index 6*/
  0x33, 0xe7, 0xfe, 0xff, 	/*Color of index 7*/
  0x74, 0xe8, 0xfd, 0xff, 	/*Color of index 8*/
  0x8f, 0xea, 0xfb, 0xff, 	/*Color of index 9*/
  0xf5, 0xee, 0xe8, 0xff, 	/*Color of index 10*/
  0xc1, 0xef, 0xf7, 0xff, 	/*Color of index 11*/
  0xaa, 0xf0, 0xfc, 0xff, 	/*Color of index 12*/
  0xe1, 0xf4, 0xf8, 0xff, 	/*Color of index 13*/
  0xf1, 0xfb, 0xfb, 0xff, 	/*Color of index 14*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 15*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x76, 0xcc, 0x77, 0x79, 0xc9, 0xbe, 0xb6, 0x56, 0xcb, 0x85, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x6f, 0xff, 0xb7, 0xcf, 0xff, 0xaa, 0xad, 0x5d, 0xaa, 0xa8, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x8f, 0xc9, 0x97, 0xef, 0x8f, 0xac, 0xaa, 0x5a, 0xa9, 0xc8, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x6f, 0xfd, 0x87, 0xee, 0x7e, 0xa5, 0xaa, 0x5d, 0xaa, 0xb5, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x78, 0xbf, 0xe7, 0xee, 0x7e, 0xa5, 0xaa, 0x56, 0xba, 0xa9, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x8c, 0x6b, 0xf6, 0xee, 0x7e, 0xa5, 0xaa, 0x6b, 0xc9, 0xac, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x8f, 0xff, 0xd7, 0xee, 0x7e, 0xa5, 0xaa, 0x5e, 0xaa, 0xa8, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x78, 0xbb, 0x67, 0xcc, 0x7c, 0xd5, 0xdd, 0x58, 0xbd, 0x95, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x65, 0x55, 0x55, 0x11, 0x11, 0x11, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x55, 0x55, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x55, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x55, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t not_sms = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 32,
  .data_size = 576,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = not_sms_map,
};

