#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 8 // UTC day 1-31
#define YOTTA_BUILD_HOUR 15 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 19 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 55 // UTC second 0-61
#define YOTTA_BUILD_UUID 3580f926-62f8-411e-84dc-2fd87cd09f5a // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 6ef6aab2d6abc67116e5ecb19425129e2713fa04 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 6ef6aab // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
