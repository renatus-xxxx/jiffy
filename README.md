[English](README.md) / [Japanese](README.ja.md)

## Jiffy

**jiffy** is a simple command-line tool that interacts with the system timer located at memory address 0xfc9e (JIFFY) that allows you to view and set the system timer.

## Features

- Display the current value of the system timer
- Set a new value for the system timer

## Usage

To display the current system timer value, execute the application without any arguments:

```batchfile
jiffy
```

To set a new system timer value, provide a numeric value (0-65535) as an argument:

```batchfile
jiffy 0
```

If a non-numeric or out-of-range value is provided, the application will display usage information:

```batchfile
usage: jiffy [0-65535]
```

## Download
- [try on webmsx](https://webmsx.org/?MACHINE=MSXTRJ&DISKA_URL=https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.DSK&FAST_BOOT)
- [.DSK image(DOS for MSX v0.16 Gaku)](https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.DSK)
- [JIFFY.COM](https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.COM)