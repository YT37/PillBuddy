// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace switch_;
using namespace binary_sensor;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
using namespace output;
gpio::GPIOBinaryOutput *extension_board_output;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id;
output::OutputSwitch *extension_board;
gpio::GPIOBinarySensor *swicth_extension_board;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id;
switch_::ToggleAction<> *switch__toggleaction_id;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_2;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, 255, 255, 255, INPUT_PULLUP, OUTPUT, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 255, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board: d1_mini
  //   restore_from_flash: true
  //   framework:
  //     version: 3.1.2
  //     source: ~3.30102.0
  //     platform_version: platformio/espressif8266@4.2.1
  //   early_pin_init: true
  //   board_flash_mode: dout
  esphome::esp8266::setup_preferences();
  // async_tcp:
  //   {}
  // esphome:
  //   name: extension-board
  //   friendly_name: Extension Board
  //   build_path: build/extension-board
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.6.6
  App.pre_setup("extension-board", "Extension Board", "", "", __DATE__ ", " __TIME__, false);
  // switch:
  // binary_sensor:
  // logger:
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   power_save_mode: LIGHT
  //   manual_ip:
  //     static_ip: 192.168.100.96
  //     gateway: 192.168.100.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Extension Board Fallback Hotspot
  //     password: !secret 'fallback_pass'
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   fast_connect: false
  //   output_power: 20.0
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_pass'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: 192.168.100.96
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.100.96");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("Thapar");
  wifi_wifiap_id_2.set_password("Thapar9977$:th");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 100, 96),
      .gateway = network::IPAddress(192, 168, 100, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Extension Board Fallback Hotspot");
  wifi_wifiap_id.set_password("Agasthya4572$:es");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_output_power(20.0f);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'ota_pass'
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 8266
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(8266);
  esphome_esphomeotacomponent_id->set_auth_password("Agatshya4572$:esot");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // api:
  //   encryption:
  //     key: !secret 'eb_key'
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_noise_psk({206, 52, 170, 231, 97, 198, 149, 187, 221, 192, 83, 67, 245, 106, 2, 29, 116, 227, 235, 187, 169, 196, 85, 85, 86, 137, 110, 227, 150, 94, 74, 2});
  // preferences:
  //   flash_write_interval: 0s
  //   id: preferences_intervalsyncer_id
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(0);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // output:
  // output.gpio:
  //   platform: gpio
  //   id: extension_board_output
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //       analog: false
  //     id: esphome_esp8266_esp8266gpiopin_id
  //     inverted: false
  extension_board_output = new gpio::GPIOBinaryOutput();
  extension_board_output->set_component_source("gpio.output");
  App.register_component(extension_board_output);
  esphome_esp8266_esp8266gpiopin_id = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id->set_pin(5);
  esphome_esp8266_esp8266gpiopin_id->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  extension_board_output->set_pin(esphome_esp8266_esp8266gpiopin_id);
  // switch.output:
  //   platform: output
  //   id: extension_board
  //   name: Extension Board
  //   output: extension_board_output
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  extension_board = new output::OutputSwitch();
  App.register_switch(extension_board);
  extension_board->set_name("Extension Board");
  extension_board->set_object_id("extension_board");
  extension_board->set_disabled_by_default(false);
  extension_board->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  extension_board->set_component_source("output.switch");
  App.register_component(extension_board);
  extension_board->set_output(extension_board_output);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     number: 4
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //       analog: false
  //     inverted: true
  //     id: esphome_esp8266_esp8266gpiopin_id_2
  //   id: swicth_extension_board
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id
  //   on_press:
  //   - then:
  //     - switch.toggle:
  //         id: extension_board
  //       type_id: switch__toggleaction_id
  //     automation_id: automation_id
  //     trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  //   name: swicth_extension_board
  swicth_extension_board = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(swicth_extension_board);
  swicth_extension_board->set_name("swicth_extension_board");
  swicth_extension_board->set_object_id("swicth_extension_board");
  swicth_extension_board->set_disabled_by_default(false);
  swicth_extension_board->set_internal(true);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(10);
  swicth_extension_board->add_filters({binary_sensor_delayedonfilter_id});
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(swicth_extension_board);
  automation_id = new Automation<>(binary_sensor_presstrigger_id);
  switch__toggleaction_id = new switch_::ToggleAction<>(extension_board);
  automation_id->add_actions({switch__toggleaction_id});
  swicth_extension_board->set_component_source("gpio.binary_sensor");
  App.register_component(swicth_extension_board);
  esphome_esp8266_esp8266gpiopin_id_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_2->set_pin(4);
  esphome_esp8266_esp8266gpiopin_id_2->set_inverted(true);
  esphome_esp8266_esp8266gpiopin_id_2->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  swicth_extension_board->set_pin(esphome_esp8266_esp8266gpiopin_id_2);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
