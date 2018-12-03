# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 27 "<stdin>"
# 1 "inc/py/mpconfig.h" 1
# 45 "inc/py/mpconfig.h"
# 1 "inc/microbit/mpconfigport.h" 1
# 27 "inc/microbit/mpconfigport.h"
# 1 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stdint.h" 3 4
# 1 "/usr/arm-none-eabi/include/stdint.h" 1 3 4
# 12 "/usr/arm-none-eabi/include/stdint.h" 3 4
# 1 "/usr/arm-none-eabi/include/machine/_default_types.h" 1 3 4







# 1 "/usr/arm-none-eabi/include/sys/features.h" 1 3 4
# 28 "/usr/arm-none-eabi/include/sys/features.h" 3 4
# 1 "/usr/arm-none-eabi/include/_newlib_version.h" 1 3 4
# 29 "/usr/arm-none-eabi/include/sys/features.h" 2 3 4
# 9 "/usr/arm-none-eabi/include/machine/_default_types.h" 2 3 4
# 41 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4

# 41 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "/usr/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 35 "/usr/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 187 "/usr/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "/usr/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/usr/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 20 "/usr/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "/usr/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/usr/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 10 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stdint.h" 2 3 4
# 28 "inc/microbit/mpconfigport.h" 2
# 106 "inc/microbit/mpconfigport.h"

# 106 "inc/microbit/mpconfigport.h"
extern const struct _mp_obj_module_t microbit_module;
extern const struct _mp_obj_module_t music_module;
extern const struct _mp_obj_module_t this_module;
extern const struct _mp_obj_module_t antigravity_module;
extern const struct _mp_obj_module_t love_module;
extern const struct _mp_obj_module_t neopixel_module;
extern const struct _mp_obj_module_t random_module;
extern const struct _mp_obj_module_t os_module;
extern const struct _mp_obj_module_t radio_module;
extern const struct _mp_obj_module_t audio_module;
extern const struct _mp_obj_module_t speech_module;
extern const struct _mp_obj_module_t utime_module;
extern const struct _mp_obj_module_t machine_module;
# 155 "inc/microbit/mpconfigport.h"
typedef intptr_t mp_int_t;
typedef uintptr_t mp_uint_t;
typedef long mp_off_t;

void mp_hal_stdout_tx_strn_cooked(const char *str, mp_uint_t len);



# 1 "/usr/arm-none-eabi/include/alloca.h" 1 3
# 10 "/usr/arm-none-eabi/include/alloca.h" 3
# 1 "/usr/arm-none-eabi/include/_ansi.h" 1 3
# 10 "/usr/arm-none-eabi/include/_ansi.h" 3
# 1 "/usr/arm-none-eabi/include/newlib.h" 1 3
# 11 "/usr/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/usr/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/usr/arm-none-eabi/include/sys/config.h" 2 3
# 12 "/usr/arm-none-eabi/include/_ansi.h" 2 3
# 11 "/usr/arm-none-eabi/include/alloca.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/reent.h" 1 3
# 13 "/usr/arm-none-eabi/include/sys/reent.h" 3
# 1 "/usr/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/usr/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 328 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 15 "/usr/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/_types.h" 1 3
# 24 "/usr/arm-none-eabi/include/sys/_types.h" 3
# 1 "/usr/arm-none-eabi/include/machine/_types.h" 1 3
# 25 "/usr/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/usr/arm-none-eabi/include/sys/lock.h" 1 3
# 33 "/usr/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 26 "/usr/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 88 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 129 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 145 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 156 "/usr/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


# 1 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/arm-none-eabi/7.3.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/usr/arm-none-eabi/include/sys/_types.h" 2 3



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;




typedef char * __va_list;
# 16 "/usr/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 287 "/usr/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 608 "/usr/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 814 "/usr/arm-none-eabi/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "/usr/arm-none-eabi/include/alloca.h" 2 3
# 164 "inc/microbit/mpconfigport.h" 2
# 46 "inc/py/mpconfig.h" 2
# 555 "inc/py/mpconfig.h"

# 555 "inc/py/mpconfig.h"
typedef float mp_float_t;
# 28 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))

Q()
Q(*)
Q(_)
Q(/)
Q(%#o)
Q(%#x)
Q({:#b})
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)


Q(help)
Q(input)
Q(collections)
Q(struct)

Q(microbit)
Q(reset)
Q(sleep)
Q(running_time)
Q(panic)
Q(temperature)

Q(this)
Q(authors)

Q(antigravity)

Q(love)
Q(badaboom)

Q(MicroBitDigitalPin)
Q(MicroBitAnalogDigitalPin)
Q(MicroBitTouchPin)
Q(read_digital)
Q(write_digital)
Q(read_analog)
Q(write_analog)
Q(set_analog_period)
Q(set_analog_period_microseconds)
Q(get_analog_period_microseconds)
Q(is_touched)
Q(unused)
Q(audio_play)
Q(button)
Q(touch)
Q(3v)
Q(get_mode)

Q(MicroBitIO)
Q(pin0)
Q(pin1)
Q(pin2)
Q(pin3)
Q(pin4)
Q(pin5)
Q(pin6)
Q(pin7)
Q(pin8)
Q(pin9)
Q(pin10)
Q(pin11)
Q(pin12)
Q(pin13)
Q(pin14)
Q(pin15)
Q(pin16)
Q(pin19)
Q(pin20)
Q(get_pull)
Q(set_pull)
Q(PULL_UP)
Q(PULL_DOWN)
Q(NO_PULL)

Q(MicroBitImage)
Q(Image)
Q(image)
Q(width)
Q(height)
Q(invert)
Q(fill)
Q(set_pixel)
Q(get_pixel)
Q(shift_left)
Q(shift_right)
Q(shift_up)
Q(shift_down)
Q(monospace)
Q(blit)
Q(HEART)
Q(HEART_SMALL)
Q(HAPPY)
Q(SAD)
Q(SMILE)
Q(CONFUSED)
Q(ANGRY)
Q(ASLEEP)
Q(SURPRISED)
Q(SILLY)
Q(FABULOUS)
Q(MEH)
Q(YES)
Q(NO)
Q(CLOCK12)
Q(CLOCK1)
Q(CLOCK2)
Q(CLOCK3)
Q(CLOCK4)
Q(CLOCK5)
Q(CLOCK6)
Q(CLOCK7)
Q(CLOCK8)
Q(CLOCK9)
Q(CLOCK10)
Q(CLOCK11)
Q(ARROW_N)
Q(ARROW_NE)
Q(ARROW_E)
Q(ARROW_SE)
Q(ARROW_S)
Q(ARROW_SW)
Q(ARROW_W)
Q(ARROW_NW)
Q(TRIANGLE)
Q(TRIANGLE_LEFT)
Q(CHESSBOARD)
Q(DIAMOND)
Q(DIAMOND_SMALL)
Q(SQUARE)
Q(SQUARE_SMALL)
Q(RABBIT)
Q(COW)
Q(MUSIC_CROTCHET)
Q(MUSIC_QUAVER)
Q(MUSIC_QUAVERS)
Q(PITCHFORK)
Q(XMAS)
Q(PACMAN)
Q(TARGET)
Q(TSHIRT)
Q(ROLLERSKATE)
Q(DUCK)
Q(HOUSE)
Q(TORTOISE)
Q(BUTTERFLY)
Q(STICKFIGURE)
Q(GHOST)
Q(SWORD)
Q(GIRAFFE)
Q(SKULL)
Q(UMBRELLA)
Q(SNAKE)

Q(ALL_ARROWS)
Q(ALL_CLOCKS)

Q(MicroBitDisplay)
Q(set_brightness)
Q(set_display_mode)
Q(display)
Q(show)
Q(scroll)
Q(delay)
Q(stride)
Q(start)
Q(wait)
Q(loop)
Q(copy)
Q(crop)
Q(slice)
Q(text)
Q(SlicedImage)
Q(ScrollingString)
Q(on)
Q(off)
Q(is_on)
Q(Facade)

Q(MicroBitButton)
Q(button_a)
Q(button_b)
Q(is_pressed)
Q(was_pressed)
Q(get_presses)

Q(MP_QSTR_MicroBitAccelerometer)
Q(accelerometer)
Q(MP_QSTR_MicroBitGyrometer)
Q(gyrometer)
Q(MP_QSTR_MicroBitMagnetometer)
Q(magnetometer)


Q(MP_QSTR_MicroBitSensor)
Q(sensor)


Q(get_x)
Q(get_y)
Q(get_z)
Q(get_values)

Q(up)
Q(down)
Q(left)
Q(right)
Q(face up)
Q(face down)
Q(freefall)
Q(3g)
Q(6g)
Q(8g)
Q(shake)

Q(heading)
Q(is_calibrated)
Q(calibrate)
Q(clear_calibration)

Q(get_field_strength)

Q(MicroBitI2C)
Q(i2c)
Q(read)
Q(write)
Q(addr)
Q(n)
Q(buf)
Q(repeat)
Q(freq)
Q(sda)
Q(scl)

Q(music)
Q(frequency)
Q(duration)
Q(pitch)
Q(pin)
Q(play)
Q(set_tempo)
Q(get_tempo)
Q(bpm)
Q(ticks)
Q(BADDY)
Q(BA_DING)
Q(BIRTHDAY)
Q(BLUES)
Q(CHASE)
Q(DADADADUM)
Q(ENTERTAINER)
Q(FUNERAL)
Q(FUNK)
Q(JUMP_DOWN)
Q(JUMP_UP)
Q(NYAN)
Q(ODE)
Q(POWER_DOWN)
Q(POWER_UP)
Q(PRELUDE)
Q(PUNCHLINE)
Q(PYTHON)
Q(RINGTONE)
Q(WAWAWAWAA)
Q(WEDDING)
Q(a)
Q(a#)
Q(a#:1)
Q(a#:3)
Q(a2)
Q(a4)
Q(a4:1)
Q(a4:3)
Q(a:1)
Q(a:2)
Q(a:4)
Q(a:5)
Q(b)
Q(b2:1)
Q(b3)
Q(b4)
Q(b4:1)
Q(b4:2)
Q(b5)
Q(b5:1)
Q(b:1)
Q(b:2)
Q(c)
Q(c#)
Q(c#5)
Q(c#5:1)
Q(c#5:2)
Q(c#:1)
Q(c#:8)
Q(c2:2)
Q(c3)
Q(c3:3)
Q(c3:4)
Q(c4)
Q(c4:1)
Q(c4:3)
Q(c4:4)
Q(c5)
Q(c5:1)
Q(c5:2)
Q(c5:3)
Q(c5:4)
Q(c:1)
Q(c:2)
Q(c:3)
Q(c:4)
Q(c:8)
Q(d)
Q(d#)
Q(d#5:2)
Q(d#:2)
Q(d#:3)
Q(d3)
Q(d4)
Q(d4:1)
Q(d5)
Q(d5:1)
Q(d5:2)
Q(d:1)
Q(d:2)
Q(d:3)
Q(d:4)
Q(d:5)
Q(d:6)
Q(d:8)
Q(e)
Q(e3:3)
Q(e4)
Q(e4:1)
Q(e5)
Q(e6:3)
Q(e:1)
Q(e:2)
Q(e:3)
Q(e:4)
Q(e:5)
Q(e:6)
Q(e:8)
Q(eb:8)
Q(f)
Q(f#)
Q(f#5)
Q(f#5:2)
Q(f#:1)
Q(f#:2)
Q(f#:8)
Q(f2)
Q(f:1)
Q(f:2)
Q(f:3)
Q(f:4)
Q(f:8)
Q(g)
Q(g#)
Q(g#:1)
Q(g#:3)
Q(g3:1)
Q(g4)
Q(g4:1)
Q(g4:2)
Q(g5)
Q(g5:1)
Q(g:1)
Q(g:2)
Q(g:3)
Q(g:8)
Q(r)
Q(r4:2)
Q(r:1)
Q(r:2)
Q(r:3)

Q(MicroBitUART)
Q(uart)
Q(init)
Q(baudrate)
Q(bits)
Q(parity)
Q(stop)
Q(pins)
Q(tx)
Q(rx)
Q(any)
Q(read)
Q(readall)
Q(readline)
Q(readinto)
Q(write)
Q(ODD)
Q(EVEN)

Q(MicroBitSPI)
Q(spi)
Q(init)
Q(baudrate)
Q(bits)
Q(mode)
Q(sclk)
Q(mosi)
Q(miso)
Q(write)
Q(write_readinto)

Q(neopixel)
Q(NeoPixel)
Q(clear)
Q(show)

Q(random)
Q(getrandbits)
Q(seed)
Q(randrange)
Q(randint)
Q(choice)
Q(uniform)

Q(audio)
Q(play)
Q(AudioFrame)
Q(pin)
Q(return_pin)
Q(source)
Q(copyfrom)

Q(name)

Q(os)
Q(uname)
Q(micropython)
Q(sysname)
Q(nodename)
Q(release)
Q(version)
Q(BytesIO)
Q(TextIO)
Q(read)
Q(write)
Q(writable)
Q(readall)
Q(name)
Q(listdir)
Q(machine)
Q(size)

Q(is_playing)

Q(speech)
Q(say)
Q(pronounce)
Q(sing)
Q(pitch)
Q(throat)
Q(mouth)
Q(speed)
Q(debug)
Q(translate)

Q(radio)
Q(reset)
Q(config)
Q(on)
Q(off)
Q(send_bytes)
Q(receive_bytes)
Q(send)
Q(receive)
Q(receive_bytes_into)
Q(receive_full)
Q(length)
Q(queue)
Q(channel)
Q(power)
Q(data_rate)
Q(address)
Q(group)
Q(RATE_250KBIT)
Q(RATE_1MBIT)
Q(RATE_2MBIT)
Q(ALL_ARROWS)

Q(ALL_CLOCKS)

Q(ANGRY)

Q(ARROW_E)

Q(ARROW_N)

Q(ARROW_NE)

Q(ARROW_NW)

Q(ARROW_S)

Q(ARROW_SE)

Q(ARROW_SW)

Q(ARROW_W)

Q(ASLEEP)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(AudioFrame)

Q(AudioFrame)

Q(BADDY)

Q(BA_DING)

Q(BIRTHDAY)

Q(BLUES)

Q(BUTTERFLY)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(CHASE)

Q(CHESSBOARD)

Q(CLOCK1)

Q(CLOCK10)

Q(CLOCK11)

Q(CLOCK12)

Q(CLOCK2)

Q(CLOCK3)

Q(CLOCK4)

Q(CLOCK5)

Q(CLOCK6)

Q(CLOCK7)

Q(CLOCK8)

Q(CLOCK9)

Q(CONFUSED)

Q(COW)

Q(CalliopeAccelerometer)

Q(CalliopeGyrometer)

Q(CalliopeLED)

Q(CalliopeMagnetometer)

Q(CalliopeSensor)

Q(DADADADUM)

Q(DIAMOND)

Q(DIAMOND_SMALL)

Q(DUCK)

Q(ENTERTAINER)

Q(EOFError)

Q(EOFError)

Q(EVEN)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FABULOUS)

Q(FUNERAL)

Q(FUNK)

Q(Facade)

Q(GHOST)

Q(GIRAFFE)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HAPPY)

Q(HEART)

Q(HEART_SMALL)

Q(HOUSE)

Q(Image)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(JUMP_DOWN)

Q(JUMP_UP)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LookupError)

Q(LookupError)

Q(MEH)

Q(MUSIC_CROTCHET)

Q(MUSIC_QUAVER)

Q(MUSIC_QUAVERS)

Q(MemoryError)

Q(MemoryError)

Q(MicroBitAnalogDigitalPin)

Q(MicroBitButton)

Q(MicroBitDigitalPin)

Q(MicroBitDisplay)

Q(MicroBitI2C)

Q(MicroBitImage)

Q(MicroBitSPI)

Q(MicroBitTouchPin)

Q(MicroBitUART)

Q(NO)

Q(NO_PULL)

Q(NO_PULL)

Q(NO_PULL)

Q(NYAN)

Q(NameError)

Q(NameError)

Q(NeoPixel)

Q(NeoPixel)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ODD)

Q(ODE)

Q(OSError)

Q(OSError)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PACMAN)

Q(PITCHFORK)

Q(POWER_DOWN)

Q(POWER_UP)

Q(PRELUDE)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_UP)

Q(PULL_UP)

Q(PULL_UP)

Q(PUNCHLINE)

Q(PYTHON)

Q(RABBIT)

Q(RATE_1MBIT)

Q(RATE_250KBIT)

Q(RATE_2MBIT)

Q(RINGTONE)

Q(ROLLERSKATE)

Q(RuntimeError)

Q(RuntimeError)

Q(SAD)

Q(SILLY)

Q(SKULL)

Q(SMILE)

Q(SNAKE)

Q(SQUARE)

Q(SQUARE_SMALL)

Q(STICKFIGURE)

Q(SURPRISED)

Q(SWORD)

Q(ScrollingString)

Q(StopIteration)

Q(StopIteration)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TARGET)

Q(TORTOISE)

Q(TRIANGLE)

Q(TRIANGLE_LEFT)

Q(TSHIRT)

Q(TextIO)

Q(TypeError)

Q(TypeError)

Q(UMBRELLA)

Q(UnicodeError)

Q(UnicodeError)

Q(ValueError)

Q(ValueError)

Q(WAWAWAWAA)

Q(WEDDING)

Q(XMAS)

Q(YES)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(__add__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__delitem__)

Q(__delitem__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__ge__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__module__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__qualname__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_star_)

Q(_star_)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a)

Q(a2)

Q(a2)

Q(a4)

Q(a4)

Q(a4)

Q(a4)

Q(a4_colon_1)

Q(a4_colon_1)

Q(a4_colon_3)

Q(a4_colon_3)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_1)

Q(a_colon_2)

Q(a_colon_2)

Q(a_colon_2)

Q(a_colon_2)

Q(a_colon_2)

Q(a_colon_2)

Q(a_colon_4)

Q(a_colon_4)

Q(a_colon_5)

Q(a_colon_5)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash_)

Q(a_hash__colon_1)

Q(a_hash__colon_1)

Q(a_hash__colon_3)

Q(a_hash__colon_3)

Q(abs)

Q(accelerometer)

Q(acos)

Q(add)

Q(add)

Q(add)

Q(addr)

Q(addr)

Q(address)

Q(align)

Q(all)

Q(and_)

Q(antigravity)

Q(antigravity)

Q(any)

Q(any)

Q(append)

Q(append)

Q(args)

Q(array)

Q(array)

Q(array)

Q(array)

Q(asin)

Q(asm_thumb)

Q(asr)

Q(atan)

Q(atan2)

Q(audio)

Q(audio)

Q(audio)

Q(authors)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b)

Q(b2_colon_1)

Q(b2_colon_1)

Q(b3)

Q(b3)

Q(b3)

Q(b3)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_1)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b4_colon_2)

Q(b5)

Q(b5)

Q(b5_colon_1)

Q(b5_colon_1)

Q(b_colon_1)

Q(b_colon_1)

Q(b_colon_1)

Q(b_colon_1)

Q(b_colon_1)

Q(b_colon_1)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(b_colon_2)

Q(badaboom)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(bits)

Q(bits)

Q(bl)

Q(blit)

Q(bool)

Q(bool)

Q(bool)

Q(bound_method)

Q(bound_method)

Q(bpm)

Q(buf)

Q(builtins)

Q(builtins)

Q(button)

Q(button_a)

Q(button_b)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c)

Q(c0)

Q(c1)

Q(c10)

Q(c11)

Q(c12)

Q(c16)

Q(c17)

Q(c18)

Q(c19)

Q(c2)

Q(c21)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c2_colon_2)

Q(c3)

Q(c3)

Q(c3)

Q(c3)

Q(c3)

Q(c3_colon_3)

Q(c3_colon_3)

Q(c3_colon_4)

Q(c3_colon_4)

Q(c3_colon_4)

Q(c3_colon_4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4)

Q(c4_colon_1)

Q(c4_colon_1)

Q(c4_colon_1)

Q(c4_colon_1)

Q(c4_colon_3)

Q(c4_colon_3)

Q(c4_colon_3)

Q(c4_colon_3)

Q(c4_colon_4)

Q(c4_colon_4)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5)

Q(c5_colon_1)

Q(c5_colon_1)

Q(c5_colon_2)

Q(c5_colon_2)

Q(c5_colon_2)

Q(c5_colon_2)

Q(c5_colon_3)

Q(c5_colon_3)

Q(c5_colon_3)

Q(c5_colon_3)

Q(c5_colon_4)

Q(c5_colon_4)

Q(c5_colon_4)

Q(c5_colon_4)

Q(c5_colon_4)

Q(c5_colon_4)

Q(c6)

Q(c7)

Q(c8)

Q(c9)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_1)

Q(c_colon_2)

Q(c_colon_2)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_3)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_4)

Q(c_colon_8)

Q(c_colon_8)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5)

Q(c_hash_5_colon_1)

Q(c_hash_5_colon_1)

Q(c_hash_5_colon_2)

Q(c_hash_5_colon_2)

Q(c_hash__colon_1)

Q(c_hash__colon_1)

Q(c_hash__colon_8)

Q(c_hash__colon_8)

Q(calcsize)

Q(callable)

Q(calliope_mini)

Q(calliope_mini)

Q(calliope_mini)

Q(ceil)

Q(channel)

Q(choice)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(closure)

Q(clz)

Q(cmp)

Q(collect)

Q(collections)

Q(config)

Q(const)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copyfrom)

Q(copysign)

Q(cos)

Q(count)

Q(count)

Q(count)

Q(count)

Q(cpsid)

Q(cpsie)

Q(crop)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d)

Q(d3)

Q(d3)

Q(d4)

Q(d4)

Q(d4)

Q(d4)

Q(d4_colon_1)

Q(d4_colon_1)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5)

Q(d5_colon_1)

Q(d5_colon_1)

Q(d5_colon_1)

Q(d5_colon_1)

Q(d5_colon_2)

Q(d5_colon_2)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_1)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_2)

Q(d_colon_3)

Q(d_colon_3)

Q(d_colon_4)

Q(d_colon_4)

Q(d_colon_4)

Q(d_colon_4)

Q(d_colon_4)

Q(d_colon_4)

Q(d_colon_5)

Q(d_colon_5)

Q(d_colon_6)

Q(d_colon_6)

Q(d_colon_8)

Q(d_colon_8)

Q(d_colon_8)

Q(d_colon_8)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_)

Q(d_hash_5_colon_2)

Q(d_hash_5_colon_2)

Q(d_hash__colon_2)

Q(d_hash__colon_2)

Q(d_hash__colon_3)

Q(d_hash__colon_3)

Q(d_hash__colon_3)

Q(d_hash__colon_3)

Q(data)

Q(data_rate)

Q(debug)

Q(default)

Q(degrees)

Q(delay)

Q(delay)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference_update)

Q(dir)

Q(disable)

Q(disable_irq)

Q(discard)

Q(display)

Q(display)

Q(divmod)

Q(duration)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e)

Q(e3_colon_3)

Q(e3_colon_3)

Q(e4)

Q(e4)

Q(e4_colon_1)

Q(e4_colon_1)

Q(e4_colon_1)

Q(e4_colon_1)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e5)

Q(e6_colon_3)

Q(e6_colon_3)

Q(e_colon_1)

Q(e_colon_1)

Q(e_colon_1)

Q(e_colon_1)

Q(e_colon_1)

Q(e_colon_1)

Q(e_colon_2)

Q(e_colon_2)

Q(e_colon_2)

Q(e_colon_2)

Q(e_colon_2)

Q(e_colon_2)

Q(e_colon_3)

Q(e_colon_3)

Q(e_colon_4)

Q(e_colon_4)

Q(e_colon_5)

Q(e_colon_5)

Q(e_colon_6)

Q(e_colon_6)

Q(e_colon_8)

Q(e_colon_8)

Q(eb_colon_8)

Q(eb_colon_8)

Q(enable)

Q(enable_irq)

Q(end)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(eval)

Q(exec)

Q(exit)

Q(exp)

Q(extend)

Q(extend)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f)

Q(f2)

Q(f2)

Q(f_colon_1)

Q(f_colon_1)

Q(f_colon_1)

Q(f_colon_1)

Q(f_colon_1)

Q(f_colon_1)

Q(f_colon_2)

Q(f_colon_2)

Q(f_colon_2)

Q(f_colon_2)

Q(f_colon_2)

Q(f_colon_2)

Q(f_colon_3)

Q(f_colon_3)

Q(f_colon_3)

Q(f_colon_3)

Q(f_colon_4)

Q(f_colon_4)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_colon_8)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_)

Q(f_hash_5)

Q(f_hash_5)

Q(f_hash_5_colon_2)

Q(f_hash_5_colon_2)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_1)

Q(f_hash__colon_2)

Q(f_hash__colon_2)

Q(f_hash__colon_2)

Q(f_hash__colon_2)

Q(f_hash__colon_2)

Q(f_hash__colon_2)

Q(f_hash__colon_8)

Q(f_hash__colon_8)

Q(fabs)

Q(fill)

Q(filter)

Q(filter)

Q(find)

Q(find)

Q(float)

Q(float)

Q(floor)

Q(fmod)

Q(format)

Q(format)

Q(freq)

Q(freq)

Q(frequency)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g)

Q(g3_colon_1)

Q(g3_colon_1)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4)

Q(g4_colon_1)

Q(g4_colon_1)

Q(g4_colon_2)

Q(g4_colon_2)

Q(g5)

Q(g5)

Q(g5_colon_1)

Q(g5_colon_1)

Q(g5_colon_1)

Q(g5_colon_1)

Q(g_colon_1)

Q(g_colon_1)

Q(g_colon_2)

Q(g_colon_2)

Q(g_colon_2)

Q(g_colon_2)

Q(g_colon_3)

Q(g_colon_3)

Q(g_colon_3)

Q(g_colon_3)

Q(g_colon_8)

Q(g_colon_8)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash_)

Q(g_hash__colon_1)

Q(g_hash__colon_1)

Q(g_hash__colon_3)

Q(g_hash__colon_3)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get_acc_values)

Q(get_acc_x)

Q(get_acc_y)

Q(get_acc_z)

Q(get_analog_period_microseconds)

Q(get_blue)

Q(get_colors)

Q(get_green)

Q(get_gyro_values)

Q(get_gyro_x)

Q(get_gyro_y)

Q(get_gyro_z)

Q(get_mag_values)

Q(get_mag_x)

Q(get_mag_y)

Q(get_mag_z)

Q(get_mode)

Q(get_mode)

Q(get_mode)

Q(get_pixel)

Q(get_pixel)

Q(get_presses)

Q(get_pull)

Q(get_pull)

Q(get_pull)

Q(get_red)

Q(get_temp)

Q(get_tempo)

Q(get_values)

Q(get_values)

Q(get_values)

Q(get_x)

Q(get_x)

Q(get_x)

Q(get_y)

Q(get_y)

Q(get_y)

Q(get_z)

Q(get_z)

Q(get_z)

Q(getattr)

Q(getrandbits)

Q(globals)

Q(group)

Q(gyrometer)

Q(hasattr)

Q(hash)

Q(heap_lock)

Q(heap_unlock)

Q(height)

Q(help)

Q(hex)

Q(i2c)

Q(i2c)

Q(id)

Q(image)

Q(implementation)

Q(index)

Q(index)

Q(index)

Q(index)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(intersection)

Q(intersection_update)

Q(invert)

Q(is_on)

Q(is_playing)

Q(is_pressed)

Q(is_touched)

Q(isalpha)

Q(isalpha)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(iter)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(join)

Q(kbd_intr)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(label)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrex)

Q(ldrh)

Q(led)

Q(len)

Q(length)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(little)

Q(locals)

Q(log)

Q(loop)

Q(loop)

Q(loop)

Q(love)

Q(love)

Q(lower)

Q(lower)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(lstrip)

Q(machine)

Q(machine)

Q(machine)

Q(magnetometer)

Q(map)

Q(map)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(mem)

Q(mem16)

Q(mem32)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(miso)

Q(mode)

Q(modf)

Q(module)

Q(modules)

Q(monospace)

Q(mosi)

Q(mouth)

Q(mov)

Q(mov)

Q(movt)

Q(movw)

Q(movwt)

Q(mrs)

Q(music)

Q(music)

Q(music)

Q(music)

Q(n)

Q(name)

Q(name)

Q(namedtuple)

Q(neopixel)

Q(neopixel)

Q(next)

Q(nodename)

Q(nop)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(on)

Q(on)

Q(open)

Q(opt_level)

Q(ord)

Q(os)

Q(os)

Q(p0)

Q(p1)

Q(p2)

Q(p3)

Q(pack)

Q(pack_into)

Q(panic)

Q(parity)

Q(pi)

Q(pin)

Q(pin)

Q(pin)

Q(pin0)

Q(pin1)

Q(pin10)

Q(pin11)

Q(pin12)

Q(pin13)

Q(pin14)

Q(pin15)

Q(pin16)

Q(pin17)

Q(pin18)

Q(pin19)

Q(pin2)

Q(pin20)

Q(pin21)

Q(pin22)

Q(pin23)

Q(pin24)

Q(pin25)

Q(pin26)

Q(pin27)

Q(pin28)

Q(pin29)

Q(pin3)

Q(pin30)

Q(pin4)

Q(pin5)

Q(pin6)

Q(pin7)

Q(pin8)

Q(pin9)

Q(pins)

Q(pitch)

Q(pitch)

Q(platform)

Q(play)

Q(play)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(pow)

Q(pow)

Q(power)

Q(print)

Q(print_exception)

Q(pronounce)

Q(push)

Q(qstr_info)

Q(queue)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r)

Q(r4_colon_2)

Q(r4_colon_2)

Q(r_colon_1)

Q(r_colon_1)

Q(r_colon_1)

Q(r_colon_1)

Q(r_colon_1)

Q(r_colon_1)

Q(r_colon_2)

Q(r_colon_2)

Q(r_colon_3)

Q(r_colon_3)

Q(radians)

Q(radio)

Q(radio)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rbit)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_analog)

Q(read_analog)

Q(read_digital)

Q(read_digital)

Q(read_digital)

Q(read_digital)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(receive)

Q(receive_bytes)

Q(receive_bytes_into)

Q(receive_full)

Q(release)

Q(remove)

Q(remove)

Q(remove)

Q(repeat)

Q(repeat)

Q(replace)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset)

Q(reset)

Q(return_pin)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rindex)

Q(rindex)

Q(round)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(running_time)

Q(rx)

Q(say)

Q(scan)

Q(scl)

Q(sclk)

Q(scroll)

Q(sda)

Q(sdiv)

Q(seed)

Q(send)

Q(send)

Q(send)

Q(send_bytes)

Q(sensor)

Q(sep)

Q(set)

Q(set)

Q(set_analog_period)

Q(set_analog_period)

Q(set_analog_period)

Q(set_analog_period_microseconds)

Q(set_analog_period_microseconds)

Q(set_analog_period_microseconds)

Q(set_blue)

Q(set_colors)

Q(set_green)

Q(set_pixel)

Q(set_pixel)

Q(set_pull)

Q(set_pull)

Q(set_pull)

Q(set_red)

Q(set_tempo)

Q(setattr)

Q(setdefault)

Q(shift_down)

Q(shift_left)

Q(shift_right)

Q(shift_up)

Q(show)

Q(show)

Q(sin)

Q(sing)

Q(size)

Q(sleep)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(sort)

Q(sorted)

Q(source)

Q(speech)

Q(speech)

Q(speed)

Q(spi)

Q(spi)

Q(split)

Q(split)

Q(sqrt)

Q(stack_use)

Q(start)

Q(startswith)

Q(startswith)

Q(staticmethod)

Q(staticmethod)

Q(step)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(strb)

Q(strex)

Q(strh)

Q(strip)

Q(strip)

Q(struct)

Q(sub)

Q(sub)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(temperature)

Q(text)

Q(this)

Q(this)

Q(threshold)

Q(throat)

Q(throw)

Q(throw)

Q(ticks)

Q(ticks_add)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(time)

Q(time_pulse_us)

Q(to_bytes)

Q(touch)

Q(translate)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tx)

Q(type)

Q(type)

Q(uart)

Q(ucollections)

Q(ucollections)

Q(udiv)

Q(uint)

Q(uname)

Q(uniform)

Q(union)

Q(unique_id)

Q(unpack)

Q(unpack_from)

Q(unused)

Q(update)

Q(update)

Q(upper)

Q(upper)

Q(ustruct)

Q(ustruct)

Q(utime)

Q(utime)

Q(value)

Q(values)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(wait)

Q(wait)

Q(wait)

Q(wait)

Q(wait)

Q(was_pressed)

Q(wfi)

Q(width)

Q(writable)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_analog)

Q(write_analog)

Q(write_analog)

Q(write_analog)

Q(write_digital)

Q(write_digital)

Q(write_digital)

Q(write_digital)

Q(write_readinto)

Q(zip)

Q(zip)
