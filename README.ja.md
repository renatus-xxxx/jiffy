<img src="https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/images/tether.png" title="tether" />

[English](README.md) / [Japanese](README.ja.md)

## Jiffy

**jiffy** は、メモリアドレス0xfc9e（JIFFY）にあるシステムタイマーと対話するシンプルなコマンドラインツールで、システムタイマーの表示と設定ができます。

## 機能

- 現在のシステムタイマーの値を表示
- システムタイマーに新しい値を設定

## 使用方法

現在のシステムタイマーの値を表示するには、引数なしでアプリケーションを実行します：

```batchfile
jiffy
```

新しいシステムタイマーの値を設定するには、数値（0-65535）を引数として提供します：

```batchfile
jiffy 0
```

数値以外の値や範囲外の値が提供された場合、アプリケーションはusage を表示します：

```batchfile
usage: jiffy [0-65535]
```

## ダウンロード
- [webmsxで試す](https://webmsx.org/?MACHINE=MSXTRJ&DISKA_URL=https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.DSK&FAST_BOOT)
- [.DSK image(DOS for MSX v0.16 Gaku)](https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.DSK)
- [JIFFY.COM](https://raw.githubusercontent.com/renatus-xxxx/jiffy/main/bin/JIFFY.COM)