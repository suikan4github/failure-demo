# Raspberry Pi Pico SDK _bi_dec() error demo
This project demonstrate the error from bi_dec() macro when you
split a line inside _bi_dec()

## details
The bi_decl() macro cause an error whe it is divided into two lines inside it's parentheses before its parameter.

In the following example, bi_decl is located at line 22, and it has line break inside parentheses. 
```cpp
  // Splitting line inside bi_decl() will cause compile error. 
  bi_decl(
    bi_program_url("https://github.com/suikan4github/failure-demo/tree/rpp_bi_decl"));
```

```
[build] /home/seiichi/git/failure-demo/src/main.c: In function 'main':
[build] /home/seiichi/git/failure-demo/src/main.c:23:5: error: '_error_bi_is_missing_enclosing_decl_23' undeclared (first use in this function); did you mean '_error_bi_is_missing_enclosing_decl_22'?
[build]    23 |     bi_program_url("https://github.com/suikan4github/failure-demo/tree/rpp_bi_decl"));
[build]       |     ^~~~~~~~~~~~~~
[build] /home/seiichi/git/failure-demo/src/main.c:23:5: note: each undeclared identifier is reported only once for each function it appears in
[build] /home/seiichi/git/failure-demo/src/main.c:22:3: error: '__bi_22' undeclared (first use in this function); did you mean '__bi_23'?
[build]    22 |   bi_decl(
[build]       |   ^~~~~~~
[build] ninja: build stopped: subcommand failed.
```

Workaround for this problem is one of : 
- Make sure everything inside parentheses of bi_decl are inside one line. 
- Place line break inside nested content of line bi_dec().

## How to reproduce
Run following commands.
```sh
mkdir build
cd build
cmake ..
cmake --build .

```

## Test condition
- Raspberry Pi Pico SDK [version 2.0.0](https://github.com/raspberrypi/pico-sdk/releases/tag/2.0.0).
- Ubuntu 24.04 (WSL)
- arm-none-eabi-gcc (15:13.2.rel1-2) 13.2.1 20231009