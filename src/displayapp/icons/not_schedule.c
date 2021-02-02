#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NOT_SCHEDULE
#define LV_ATTRIBUTE_IMG_NOT_SCHEDULE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NOT_SCHEDULE uint8_t not_schedule_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0x2e, 0x1b, 0x08, 0xff, 	/*Color of index 1*/
  0x2d, 0x2f, 0x2d, 0xff, 	/*Color of index 2*/
  0x69, 0x3d, 0x0b, 0xff, 	/*Color of index 3*/
  0x46, 0x47, 0x44, 0xff, 	/*Color of index 4*/
  0xad, 0x6b, 0x1f, 0xff, 	/*Color of index 5*/
  0xc6, 0x71, 0x10, 0xff, 	/*Color of index 6*/
  0xd4, 0x76, 0x1a, 0xff, 	/*Color of index 7*/
  0xea, 0x8e, 0x1c, 0xff, 	/*Color of index 8*/
  0xf3, 0x97, 0x10, 0xff, 	/*Color of index 9*/
  0xf4, 0xa8, 0x4a, 0xff, 	/*Color of index 10*/
  0xf3, 0xae, 0x53, 0xff, 	/*Color of index 11*/
  0xa3, 0xa1, 0x9c, 0xff, 	/*Color of index 12*/
  0xf9, 0xc7, 0x8b, 0xff, 	/*Color of index 13*/
  0xf3, 0xda, 0xb9, 0xff, 	/*Color of index 14*/
  0xf1, 0xef, 0xea, 0xff, 	/*Color of index 15*/

  0x00, 0x00, 0x00, 0x03, 0x67, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x76, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x77, 0x77, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x77, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x77, 0x77, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x77, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x77, 0x77, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x77, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x77, 0x77, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x77, 0x77, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x55, 0x57, 0x77, 0x77, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x77, 0x77, 0x75, 0x55, 0x30, 0x00, 
  0x01, 0x89, 0x99, 0x97, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x79, 0x99, 0x98, 0x10, 
  0x18, 0x99, 0x99, 0x97, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x79, 0x99, 0x99, 0x81, 
  0x59, 0x99, 0x99, 0x97, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x79, 0x99, 0x99, 0x95, 
  0x89, 0x99, 0x99, 0x97, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x98, 0x77, 0x77, 0x79, 0x99, 0x99, 0x98, 
  0x99, 0x99, 0x99, 0x98, 0x88, 0x88, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x88, 0x88, 0x89, 0x99, 0x99, 0x99, 
  0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
  0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
  0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
  0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 
  0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xbb, 0xbb, 0xbd, 0xff, 0xff, 0xff, 0xbb, 0xbb, 0xbb, 0xff, 0xff, 0xff, 0xdb, 0xbb, 0xbb, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xff, 0xff, 0xfe, 0x99, 0x99, 0x99, 0xef, 0xff, 0xff, 0x99, 0x99, 0x99, 0xdf, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xee, 0xee, 0xef, 0xff, 0xff, 0xff, 0xee, 0xee, 0xee, 0xff, 0xff, 0xff, 0xfe, 0xee, 0xee, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xee, 0xee, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfd, 0x99, 0x99, 0x99, 0xff, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0x99, 0x99, 0x99, 0xef, 0xff, 0xfe, 0xdd, 0xdd, 0xdd, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xbb, 0xbb, 0xbd, 0xff, 0xff, 0xff, 0xee, 0xee, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 
  0x04, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 
  0x00, 0x2c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x00, 
};

const lv_img_dsc_t not_schedule = {
  .header.always_zero = 0,
  .header.w = 42,
  .header.h = 42,
  .data_size = 946,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = not_schedule_map,
};
