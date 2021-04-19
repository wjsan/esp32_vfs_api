/**
 * @file esp32_vfs_fat_api.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ESP32_VFS_FAT_API__H__
#define __ESP32_VFS_FAT_API__H__

void vfs_fat_mount();
int  vfs_fat_file_exists(char filename[32]);
void vfs_fat_write(char filename[32], char *content);
void vfs_fat_read(char filename[32], char *buf);
void vfs_fat_delete(char filename[32]);
void vfs_fat_unmount();

#endif  //!__ESP32_VFS_FAT_API__H__