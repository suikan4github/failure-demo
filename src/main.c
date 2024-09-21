#include "pico/binary_info.h"
#include "pico/stdlib.h"

const uint LED_PIN = PICO_DEFAULT_LED_PIN;

int main() {
  const unsigned int duration = 1000;

  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  while (true) {
    gpio_put(LED_PIN, 1);
    sleep_ms(duration);
    gpio_put(LED_PIN, 0);
    sleep_ms(duration);
  }

  // clang-format off
#if 1
  // Splitting line inside bi_decl() will cause compile error. 
  bi_decl(
    bi_program_url("https://github.com/suikan4github/failure-demo/tree/rpp_bi_decl"));
#else
  // As single line, no error occurs.  
  bi_decl(bi_program_url("https://github.com/suikan4github/failure-demo/tree/rpp_bi_decl"));
#endif
  // clang-format on
}