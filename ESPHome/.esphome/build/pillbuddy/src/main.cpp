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
using namespace i2c;
i2c::ArduinoI2CBus *i2c_component;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
using namespace output;
output::BinaryOutput *output_dispense;
output::OutputSwitch *dispense;
gpio::GPIOBinarySensor *switch_dispense;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id;
switch_::ToggleAction<> *switch__toggleaction_id;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, INPUT_PULLUP, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
#include "arduino_port_expander.h"
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board: d1
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
  //   name: pillbuddy
  //   friendly_name: PillBuddy
  //   includes:
  //   - arduino_port_expander.h
  //   build_path: build/pillbuddy
  //   area: ''
  //   platformio_options: {}
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.9.1
  App.pre_setup("pillbuddy", "PillBuddy", "", "", __DATE__ ", " __TIME__, false);
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
  //   manual_ip:
  //     static_ip: 172.20.10.8
  //     gateway: 172.20.10.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Pillbuddy Fallback Hotspot
  //     password: BGskCYRhiEt2
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: Yug
  //     password: '12345678'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: 172.20.10.8
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("172.20.10.8");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("Yug");
  wifi_wifiap_id_2.set_password("12345678");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(172, 20, 10, 8),
      .gateway = network::IPAddress(172, 20, 10, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Pillbuddy Fallback Hotspot");
  wifi_wifiap_id.set_password("BGskCYRhiEt2");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
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
  //   password: 60039e99813a9bc774fb62ef3b65abb0
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 8266
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(8266);
  esphome_esphomeotacomponent_id->set_auth_password("60039e99813a9bc774fb62ef3b65abb0");
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
  //     key: pD67Ywb7G+iG3uSMDNa25U/z/SOVfhhWO5orXnIEGTM=
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
  api_apiserver_id->set_noise_psk({164, 62, 187, 99, 6, 251, 27, 232, 134, 222, 228, 140, 12, 214, 182, 229, 79, 243, 253, 35, 149, 126, 24, 86, 59, 154, 43, 94, 114, 4, 25, 51});
  // i2c:
  //   id: i2c_component
  //   sda: 4
  //   scl: 5
  //   frequency: 50000.0
  //   scan: true
  i2c_component = new i2c::ArduinoI2CBus();
  i2c_component->set_component_source("i2c");
  App.register_component(i2c_component);
  i2c_component->set_sda_pin(4);
  i2c_component->set_scl_pin(5);
  i2c_component->set_frequency(50000);
  i2c_component->set_scan(true);
  // preferences:
  //   flash_write_interval: 0s
  //   id: preferences_intervalsyncer_id
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(0);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // custom_component:
  //   id: ape
  //   lambda: !lambda |-
  //     auto ape_component = new ArduinoPortExpander(i2c_component, 0x08);
  //     return {ape_component};
  custom_component::CustomComponentConstructor ape = custom_component::CustomComponentConstructor([=]() -> std::vector<Component *> {
      #line 20 "PillBuddy.yaml"
      auto ape_component = new ArduinoPortExpander(i2c_component, 0x08);
      return {ape_component};
  });
  // output:
  // output.custom:
  //   platform: custom
  //   lambda: !lambda |-
  //     return {ape_binary_output(ape, 4)};
  //   outputs:
  //   - id: output_dispense
  //     inverted: true
  //   id: custom_custombinaryoutputconstructor_id
  //   type: binary
  custom::CustomBinaryOutputConstructor custom_custombinaryoutputconstructor_id = custom::CustomBinaryOutputConstructor([=]() -> std::vector<output::BinaryOutput *> {
      #line 65 "PillBuddy.yaml"
      return {ape_binary_output(ape, 4)};
  });
  output_dispense = custom_custombinaryoutputconstructor_id.get_output(0);
  output_dispense->set_inverted(true);
  // switch.output:
  //   platform: output
  //   id: dispense
  //   name: Dispense
  //   output: output_dispense
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  dispense = new output::OutputSwitch();
  App.register_switch(dispense);
  dispense->set_name("Dispense");
  dispense->set_object_id("dispense");
  dispense->set_disabled_by_default(false);
  dispense->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  dispense->set_component_source("output.switch");
  App.register_component(dispense);
  dispense->set_output(output_dispense);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     number: 14
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //       analog: false
  //     inverted: true
  //     id: esphome_esp8266_esp8266gpiopin_id
  //   id: switch_dispense
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id
  //   on_press:
  //   - then:
  //     - switch.toggle:
  //         id: dispense
  //       type_id: switch__toggleaction_id
  //     automation_id: automation_id
  //     trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  //   name: switch_dispense
  switch_dispense = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_dispense);
  switch_dispense->set_name("switch_dispense");
  switch_dispense->set_object_id("switch_dispense");
  switch_dispense->set_disabled_by_default(false);
  switch_dispense->set_internal(true);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(10);
  switch_dispense->add_filters({binary_sensor_delayedonfilter_id});
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(switch_dispense);
  automation_id = new Automation<>(binary_sensor_presstrigger_id);
  switch__toggleaction_id = new switch_::ToggleAction<>(dispense);
  automation_id->add_actions({switch__toggleaction_id});
  switch_dispense->set_component_source("gpio.binary_sensor");
  App.register_component(switch_dispense);
  esphome_esp8266_esp8266gpiopin_id = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id->set_pin(14);
  esphome_esp8266_esp8266gpiopin_id->set_inverted(true);
  esphome_esp8266_esp8266gpiopin_id->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_dispense->set_pin(esphome_esp8266_esp8266gpiopin_id);
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
