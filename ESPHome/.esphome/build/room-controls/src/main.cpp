// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace light;
using namespace switch_;
using namespace fan;
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
i2c::ArduinoI2CBus *i2c_arduinoi2cbus_id;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
sx1509::SX1509Component *expander1;
sx1509::SX1509Component *expander2;
using namespace output;
sx1509::SX1509FloatOutputChannel *bedroom_light_output1;
sx1509::SX1509FloatOutputChannel *bedroom_light_output2;
sx1509::SX1509FloatOutputChannel *bedroom_light_output3;
sx1509::SX1509FloatOutputChannel *bedroom_light_output4;
sx1509::SX1509FloatOutputChannel *bathroom_light_output1;
sx1509::SX1509FloatOutputChannel *bathroom_light_output2;
sx1509::SX1509FloatOutputChannel *bedroom_socket_output2;
sx1509::SX1509FloatOutputChannel *bedroom_socket_output1;
sx1509::SX1509FloatOutputChannel *bedroom_fan_output1;
binary::BinaryLightOutput *binary_binarylightoutput_id;
light::LightState *bedroom_light1;
binary::BinaryLightOutput *binary_binarylightoutput_id_2;
light::LightState *bedroom_light2;
binary::BinaryLightOutput *binary_binarylightoutput_id_3;
light::LightState *bedroom_light3;
binary::BinaryLightOutput *binary_binarylightoutput_id_4;
light::LightState *bedroom_light4;
binary::BinaryLightOutput *binary_binarylightoutput_id_5;
light::LightState *bathroom_light1;
binary::BinaryLightOutput *binary_binarylightoutput_id_6;
light::LightState *bathroom_light2;
output::OutputSwitch *bedroom_socket1;
output::OutputSwitch *bedroom_socket2;
binary::BinaryFan *binary_binaryfan_id;
fan::Fan *bedroom_fan1;
gpio::GPIOBinarySensor *switch_bedroom_lights;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id;
light::ToggleAction<> *light_toggleaction_id;
light::ToggleAction<> *light_toggleaction_id_2;
light::ToggleAction<> *light_toggleaction_id_3;
light::ToggleAction<> *light_toggleaction_id_4;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id;
gpio::GPIOBinarySensor *switch_bathroom_lights;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_2;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_2;
Automation<> *automation_id_2;
light::ToggleAction<> *light_toggleaction_id_5;
light::ToggleAction<> *light_toggleaction_id_6;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_2;
gpio::GPIOBinarySensor *switch_bedroom_sockets;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_3;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_3;
Automation<> *automation_id_3;
switch_::ToggleAction<> *switch__toggleaction_id;
switch_::ToggleAction<> *switch__toggleaction_id_2;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_3;
gpio::GPIOBinarySensor *switch_bedroom_fan1;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_4;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_4;
Automation<> *automation_id_4;
fan::ToggleAction<> *fan_toggleaction_id;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_4;
gpio::GPIOBinarySensor *switch_all_off;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_5;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_5;
Automation<> *automation_id_5;
light::LightControlAction<> *light_lightcontrolaction_id;
light::LightControlAction<> *light_lightcontrolaction_id_2;
light::LightControlAction<> *light_lightcontrolaction_id_3;
light::LightControlAction<> *light_lightcontrolaction_id_4;
light::LightControlAction<> *light_lightcontrolaction_id_5;
light::LightControlAction<> *light_lightcontrolaction_id_6;
switch_::TurnOffAction<> *switch__turnoffaction_id;
switch_::TurnOffAction<> *switch__turnoffaction_id_2;
fan::TurnOffAction<> *fan_turnoffaction_id;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_5;
gpio::GPIOBinarySensor *switch_all_on;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_6;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_6;
Automation<> *automation_id_6;
light::LightControlAction<> *light_lightcontrolaction_id_7;
light::LightControlAction<> *light_lightcontrolaction_id_8;
light::LightControlAction<> *light_lightcontrolaction_id_9;
light::LightControlAction<> *light_lightcontrolaction_id_10;
light::LightControlAction<> *light_lightcontrolaction_id_11;
light::LightControlAction<> *light_lightcontrolaction_id_12;
switch_::TurnOnAction<> *switch__turnonaction_id;
switch_::TurnOnAction<> *switch__turnonaction_id_2;
fan::TurnOnAction<> *fan_turnonaction_id;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_6;
gpio::GPIOBinarySensor *hard_switch_bedroom_light1;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_7;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_7;
Automation<> *automation_id_7;
light::ToggleAction<> *light_toggleaction_id_7;
light::ToggleAction<> *light_toggleaction_id_8;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_7;
gpio::GPIOBinarySensor *hard_switch_bedroom_light2;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_8;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_8;
Automation<> *automation_id_8;
light::ToggleAction<> *light_toggleaction_id_9;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_8;
gpio::GPIOBinarySensor *hard_switch_bedroom_light3;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_9;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_9;
Automation<> *automation_id_9;
light::ToggleAction<> *light_toggleaction_id_10;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_9;
gpio::GPIOBinarySensor *hard_switch_bedroom_light4;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_10;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_10;
Automation<> *automation_id_10;
light::ToggleAction<> *light_toggleaction_id_11;
light::ToggleAction<> *light_toggleaction_id_12;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_10;
gpio::GPIOBinarySensor *hard_switch_bedroom_socket1;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_11;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_11;
Automation<> *automation_id_11;
switch_::ToggleAction<> *switch__toggleaction_id_3;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_11;
gpio::GPIOBinarySensor *hard_switch_bedroom_socket2;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_12;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_12;
Automation<> *automation_id_12;
switch_::ToggleAction<> *switch__toggleaction_id_4;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_12;
gpio::GPIOBinarySensor *hard_switch_bedroom_fan1;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_13;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_13;
Automation<> *automation_id_13;
fan::ToggleAction<> *fan_toggleaction_id_2;
sx1509::SX1509GPIOPin *sx1509_sx1509gpiopin_id_13;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board: nodemcuv2
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
  //   name: room-controls
  //   friendly_name: Room
  //   build_path: build/room-controls
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.6.6
  App.pre_setup("room-controls", "Room", "", "", __DATE__ ", " __TIME__, false);
  // light:
  // switch:
  // fan:
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
  //     static_ip: 192.168.100.95
  //     gateway: 192.168.100.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Room Controls Fallback Hotspot
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
  //   use_address: 192.168.100.95
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.100.95");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("Thapar");
  wifi_wifiap_id_2.set_password("Thapar9977$:th");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 100, 95),
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
  wifi_wifiap_id.set_ssid("Room Controls Fallback Hotspot");
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
  //     key: !secret 'room_key'
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
  api_apiserver_id->set_noise_psk({66, 80, 180, 239, 160, 222, 101, 85, 162, 145, 99, 80, 131, 102, 143, 20, 34, 103, 0, 204, 22, 107, 9, 54, 94, 98, 225, 22, 220, 240, 110, 188});
  // i2c:
  //   scan: true
  //   id: i2c_arduinoi2cbus_id
  //   sda: 4
  //   scl: 5
  //   frequency: 50000.0
  i2c_arduinoi2cbus_id = new i2c::ArduinoI2CBus();
  i2c_arduinoi2cbus_id->set_component_source("i2c");
  App.register_component(i2c_arduinoi2cbus_id);
  i2c_arduinoi2cbus_id->set_sda_pin(4);
  i2c_arduinoi2cbus_id->set_scl_pin(5);
  i2c_arduinoi2cbus_id->set_frequency(50000);
  i2c_arduinoi2cbus_id->set_scan(true);
  // preferences:
  //   flash_write_interval: 0s
  //   id: preferences_intervalsyncer_id
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(0);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // sx1509:
  //   id: expander1
  //   address: 0x3F
  //   i2c_id: i2c_arduinoi2cbus_id
  expander1 = new sx1509::SX1509Component();
  expander1->set_component_source("sx1509");
  App.register_component(expander1);
  expander1->set_i2c_bus(i2c_arduinoi2cbus_id);
  expander1->set_i2c_address(0x3F);
  // sx1509:
  //   id: expander2
  //   address: 0x3E
  //   i2c_id: i2c_arduinoi2cbus_id
  expander2 = new sx1509::SX1509Component();
  expander2->set_component_source("sx1509");
  App.register_component(expander2);
  expander2->set_i2c_bus(i2c_arduinoi2cbus_id);
  expander2->set_i2c_address(0x3E);
  // output:
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_light_output1
  //   sx1509_id: expander1
  //   pin: 14
  //   zero_means_zero: false
  bedroom_light_output1 = new sx1509::SX1509FloatOutputChannel();
  bedroom_light_output1->set_component_source("sx1509.output");
  App.register_component(bedroom_light_output1);
  bedroom_light_output1->set_zero_means_zero(false);
  bedroom_light_output1->set_pin(14);
  bedroom_light_output1->set_parent(expander1);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_light_output2
  //   sx1509_id: expander1
  //   pin: 13
  //   zero_means_zero: false
  bedroom_light_output2 = new sx1509::SX1509FloatOutputChannel();
  bedroom_light_output2->set_component_source("sx1509.output");
  App.register_component(bedroom_light_output2);
  bedroom_light_output2->set_zero_means_zero(false);
  bedroom_light_output2->set_pin(13);
  bedroom_light_output2->set_parent(expander1);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_light_output3
  //   sx1509_id: expander2
  //   pin: 3
  //   zero_means_zero: false
  bedroom_light_output3 = new sx1509::SX1509FloatOutputChannel();
  bedroom_light_output3->set_component_source("sx1509.output");
  App.register_component(bedroom_light_output3);
  bedroom_light_output3->set_zero_means_zero(false);
  bedroom_light_output3->set_pin(3);
  bedroom_light_output3->set_parent(expander2);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_light_output4
  //   sx1509_id: expander2
  //   pin: 5
  //   zero_means_zero: false
  bedroom_light_output4 = new sx1509::SX1509FloatOutputChannel();
  bedroom_light_output4->set_component_source("sx1509.output");
  App.register_component(bedroom_light_output4);
  bedroom_light_output4->set_zero_means_zero(false);
  bedroom_light_output4->set_pin(5);
  bedroom_light_output4->set_parent(expander2);
  // output.sx1509:
  //   platform: sx1509
  //   id: bathroom_light_output1
  //   sx1509_id: expander1
  //   pin: 10
  //   zero_means_zero: false
  bathroom_light_output1 = new sx1509::SX1509FloatOutputChannel();
  bathroom_light_output1->set_component_source("sx1509.output");
  App.register_component(bathroom_light_output1);
  bathroom_light_output1->set_zero_means_zero(false);
  bathroom_light_output1->set_pin(10);
  bathroom_light_output1->set_parent(expander1);
  // output.sx1509:
  //   platform: sx1509
  //   id: bathroom_light_output2
  //   sx1509_id: expander1
  //   pin: 11
  //   zero_means_zero: false
  bathroom_light_output2 = new sx1509::SX1509FloatOutputChannel();
  bathroom_light_output2->set_component_source("sx1509.output");
  App.register_component(bathroom_light_output2);
  bathroom_light_output2->set_zero_means_zero(false);
  bathroom_light_output2->set_pin(11);
  bathroom_light_output2->set_parent(expander1);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_socket_output2
  //   sx1509_id: expander2
  //   pin: 6
  //   zero_means_zero: false
  bedroom_socket_output2 = new sx1509::SX1509FloatOutputChannel();
  bedroom_socket_output2->set_component_source("sx1509.output");
  App.register_component(bedroom_socket_output2);
  bedroom_socket_output2->set_zero_means_zero(false);
  bedroom_socket_output2->set_pin(6);
  bedroom_socket_output2->set_parent(expander2);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_socket_output1
  //   sx1509_id: expander2
  //   pin: 7
  //   zero_means_zero: false
  bedroom_socket_output1 = new sx1509::SX1509FloatOutputChannel();
  bedroom_socket_output1->set_component_source("sx1509.output");
  App.register_component(bedroom_socket_output1);
  bedroom_socket_output1->set_zero_means_zero(false);
  bedroom_socket_output1->set_pin(7);
  bedroom_socket_output1->set_parent(expander2);
  // output.sx1509:
  //   platform: sx1509
  //   id: bedroom_fan_output1
  //   sx1509_id: expander2
  //   pin: 4
  //   zero_means_zero: false
  bedroom_fan_output1 = new sx1509::SX1509FloatOutputChannel();
  bedroom_fan_output1->set_component_source("sx1509.output");
  App.register_component(bedroom_fan_output1);
  bedroom_fan_output1->set_zero_means_zero(false);
  bedroom_fan_output1->set_pin(4);
  bedroom_fan_output1->set_parent(expander2);
  // light.binary:
  //   platform: binary
  //   id: bedroom_light1
  //   name: Bed Lights
  //   output: bedroom_light_output1
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id
  binary_binarylightoutput_id = new binary::BinaryLightOutput();
  bedroom_light1 = new light::LightState(binary_binarylightoutput_id);
  App.register_light(bedroom_light1);
  bedroom_light1->set_component_source("light");
  App.register_component(bedroom_light1);
  bedroom_light1->set_name("Bed Lights");
  bedroom_light1->set_object_id("bed_lights");
  bedroom_light1->set_disabled_by_default(false);
  bedroom_light1->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bedroom_light1->add_effects({});
  binary_binarylightoutput_id->set_output(bedroom_light_output1);
  // light.binary:
  //   platform: binary
  //   id: bedroom_light2
  //   name: TV Lights
  //   output: bedroom_light_output2
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id_2
  binary_binarylightoutput_id_2 = new binary::BinaryLightOutput();
  bedroom_light2 = new light::LightState(binary_binarylightoutput_id_2);
  App.register_light(bedroom_light2);
  bedroom_light2->set_component_source("light");
  App.register_component(bedroom_light2);
  bedroom_light2->set_name("TV Lights");
  bedroom_light2->set_object_id("tv_lights");
  bedroom_light2->set_disabled_by_default(false);
  bedroom_light2->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bedroom_light2->add_effects({});
  binary_binarylightoutput_id_2->set_output(bedroom_light_output2);
  // light.binary:
  //   platform: binary
  //   id: bedroom_light3
  //   name: Desk Light
  //   output: bedroom_light_output3
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id_3
  binary_binarylightoutput_id_3 = new binary::BinaryLightOutput();
  bedroom_light3 = new light::LightState(binary_binarylightoutput_id_3);
  App.register_light(bedroom_light3);
  bedroom_light3->set_component_source("light");
  App.register_component(bedroom_light3);
  bedroom_light3->set_name("Desk Light");
  bedroom_light3->set_object_id("desk_light");
  bedroom_light3->set_disabled_by_default(false);
  bedroom_light3->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bedroom_light3->add_effects({});
  binary_binarylightoutput_id_3->set_output(bedroom_light_output3);
  // light.binary:
  //   platform: binary
  //   id: bedroom_light4
  //   name: Ceiling Light
  //   output: bedroom_light_output4
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id_4
  binary_binarylightoutput_id_4 = new binary::BinaryLightOutput();
  bedroom_light4 = new light::LightState(binary_binarylightoutput_id_4);
  App.register_light(bedroom_light4);
  bedroom_light4->set_component_source("light");
  App.register_component(bedroom_light4);
  bedroom_light4->set_name("Ceiling Light");
  bedroom_light4->set_object_id("ceiling_light");
  bedroom_light4->set_disabled_by_default(false);
  bedroom_light4->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bedroom_light4->add_effects({});
  binary_binarylightoutput_id_4->set_output(bedroom_light_output4);
  // light.binary:
  //   platform: binary
  //   id: bathroom_light1
  //   name: Corner Lights
  //   output: bathroom_light_output1
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id_5
  binary_binarylightoutput_id_5 = new binary::BinaryLightOutput();
  bathroom_light1 = new light::LightState(binary_binarylightoutput_id_5);
  App.register_light(bathroom_light1);
  bathroom_light1->set_component_source("light");
  App.register_component(bathroom_light1);
  bathroom_light1->set_name("Corner Lights");
  bathroom_light1->set_object_id("corner_lights");
  bathroom_light1->set_disabled_by_default(false);
  bathroom_light1->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bathroom_light1->add_effects({});
  binary_binarylightoutput_id_5->set_output(bathroom_light_output1);
  // light.binary:
  //   platform: binary
  //   id: bathroom_light2
  //   name: Bathroom Ceiling Light
  //   output: bathroom_light_output2
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binarylightoutput_id_6
  binary_binarylightoutput_id_6 = new binary::BinaryLightOutput();
  bathroom_light2 = new light::LightState(binary_binarylightoutput_id_6);
  App.register_light(bathroom_light2);
  bathroom_light2->set_component_source("light");
  App.register_component(bathroom_light2);
  bathroom_light2->set_name("Bathroom Ceiling Light");
  bathroom_light2->set_object_id("bathroom_ceiling_light");
  bathroom_light2->set_disabled_by_default(false);
  bathroom_light2->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  bathroom_light2->add_effects({});
  binary_binarylightoutput_id_6->set_output(bathroom_light_output2);
  // switch.output:
  //   platform: output
  //   id: bedroom_socket1
  //   name: Bed Socket Left
  //   output: bedroom_socket_output1
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  bedroom_socket1 = new output::OutputSwitch();
  App.register_switch(bedroom_socket1);
  bedroom_socket1->set_name("Bed Socket Left");
  bedroom_socket1->set_object_id("bed_socket_left");
  bedroom_socket1->set_disabled_by_default(false);
  bedroom_socket1->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  bedroom_socket1->set_component_source("output.switch");
  App.register_component(bedroom_socket1);
  bedroom_socket1->set_output(bedroom_socket_output1);
  // switch.output:
  //   platform: output
  //   id: bedroom_socket2
  //   name: Bed Socket Right
  //   output: bedroom_socket_output2
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  bedroom_socket2 = new output::OutputSwitch();
  App.register_switch(bedroom_socket2);
  bedroom_socket2->set_name("Bed Socket Right");
  bedroom_socket2->set_object_id("bed_socket_right");
  bedroom_socket2->set_disabled_by_default(false);
  bedroom_socket2->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  bedroom_socket2->set_component_source("output.switch");
  App.register_component(bedroom_socket2);
  bedroom_socket2->set_output(bedroom_socket_output2);
  // fan.binary:
  //   platform: binary
  //   id: bedroom_fan1
  //   name: Fan
  //   output: bedroom_fan_output1
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   disabled_by_default: false
  //   output_id: binary_binaryfan_id
  binary_binaryfan_id = new binary::BinaryFan();
  binary_binaryfan_id->set_component_source("binary.fan");
  App.register_component(binary_binaryfan_id);
  bedroom_fan1 = binary_binaryfan_id;
  App.register_fan(bedroom_fan1);
  bedroom_fan1->set_name("Fan");
  bedroom_fan1->set_object_id("fan");
  bedroom_fan1->set_disabled_by_default(false);
  bedroom_fan1->set_restore_mode(fan::FanRestoreMode::RESTORE_DEFAULT_OFF);
  binary_binaryfan_id->set_output(bedroom_fan_output1);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 0
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id
  //   id: switch_bedroom_lights
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bedroom_light1
  //       type_id: light_toggleaction_id
  //     - light.toggle:
  //         id: bedroom_light2
  //       type_id: light_toggleaction_id_2
  //     - light.toggle:
  //         id: bedroom_light3
  //       type_id: light_toggleaction_id_3
  //     - light.toggle:
  //         id: bedroom_light4
  //       type_id: light_toggleaction_id_4
  //     automation_id: automation_id
  //     trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  //   name: switch_bedroom_lights
  switch_bedroom_lights = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_bedroom_lights);
  switch_bedroom_lights->set_name("switch_bedroom_lights");
  switch_bedroom_lights->set_object_id("switch_bedroom_lights");
  switch_bedroom_lights->set_disabled_by_default(false);
  switch_bedroom_lights->set_internal(true);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(10);
  switch_bedroom_lights->add_filters({binary_sensor_delayedonfilter_id});
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(switch_bedroom_lights);
  automation_id = new Automation<>(binary_sensor_presstrigger_id);
  light_toggleaction_id = new light::ToggleAction<>(bedroom_light1);
  light_toggleaction_id_2 = new light::ToggleAction<>(bedroom_light2);
  light_toggleaction_id_3 = new light::ToggleAction<>(bedroom_light3);
  light_toggleaction_id_4 = new light::ToggleAction<>(bedroom_light4);
  automation_id->add_actions({light_toggleaction_id, light_toggleaction_id_2, light_toggleaction_id_3, light_toggleaction_id_4});
  switch_bedroom_lights->set_component_source("gpio.binary_sensor");
  App.register_component(switch_bedroom_lights);
  sx1509_sx1509gpiopin_id = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id->set_parent(expander1);
  sx1509_sx1509gpiopin_id->set_pin(0);
  sx1509_sx1509gpiopin_id->set_inverted(true);
  sx1509_sx1509gpiopin_id->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_bedroom_lights->set_pin(sx1509_sx1509gpiopin_id);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 1
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_2
  //   id: switch_bathroom_lights
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_2
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bathroom_light1
  //       type_id: light_toggleaction_id_5
  //     - light.toggle:
  //         id: bathroom_light2
  //       type_id: light_toggleaction_id_6
  //     automation_id: automation_id_2
  //     trigger_id: binary_sensor_presstrigger_id_2
  //   disabled_by_default: false
  //   name: switch_bathroom_lights
  switch_bathroom_lights = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_bathroom_lights);
  switch_bathroom_lights->set_name("switch_bathroom_lights");
  switch_bathroom_lights->set_object_id("switch_bathroom_lights");
  switch_bathroom_lights->set_disabled_by_default(false);
  switch_bathroom_lights->set_internal(true);
  binary_sensor_delayedonfilter_id_2 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_2->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_2);
  binary_sensor_delayedonfilter_id_2->set_delay(10);
  switch_bathroom_lights->add_filters({binary_sensor_delayedonfilter_id_2});
  binary_sensor_presstrigger_id_2 = new binary_sensor::PressTrigger(switch_bathroom_lights);
  automation_id_2 = new Automation<>(binary_sensor_presstrigger_id_2);
  light_toggleaction_id_5 = new light::ToggleAction<>(bathroom_light1);
  light_toggleaction_id_6 = new light::ToggleAction<>(bathroom_light2);
  automation_id_2->add_actions({light_toggleaction_id_5, light_toggleaction_id_6});
  switch_bathroom_lights->set_component_source("gpio.binary_sensor");
  App.register_component(switch_bathroom_lights);
  sx1509_sx1509gpiopin_id_2 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_2->set_parent(expander1);
  sx1509_sx1509gpiopin_id_2->set_pin(1);
  sx1509_sx1509gpiopin_id_2->set_inverted(true);
  sx1509_sx1509gpiopin_id_2->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_bathroom_lights->set_pin(sx1509_sx1509gpiopin_id_2);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 2
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_3
  //   id: switch_bedroom_sockets
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_3
  //   on_press:
  //   - then:
  //     - switch.toggle:
  //         id: bedroom_socket1
  //       type_id: switch__toggleaction_id
  //     - switch.toggle:
  //         id: bedroom_socket2
  //       type_id: switch__toggleaction_id_2
  //     automation_id: automation_id_3
  //     trigger_id: binary_sensor_presstrigger_id_3
  //   disabled_by_default: false
  //   name: switch_bedroom_sockets
  switch_bedroom_sockets = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_bedroom_sockets);
  switch_bedroom_sockets->set_name("switch_bedroom_sockets");
  switch_bedroom_sockets->set_object_id("switch_bedroom_sockets");
  switch_bedroom_sockets->set_disabled_by_default(false);
  switch_bedroom_sockets->set_internal(true);
  binary_sensor_delayedonfilter_id_3 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_3->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_3);
  binary_sensor_delayedonfilter_id_3->set_delay(10);
  switch_bedroom_sockets->add_filters({binary_sensor_delayedonfilter_id_3});
  binary_sensor_presstrigger_id_3 = new binary_sensor::PressTrigger(switch_bedroom_sockets);
  automation_id_3 = new Automation<>(binary_sensor_presstrigger_id_3);
  switch__toggleaction_id = new switch_::ToggleAction<>(bedroom_socket1);
  switch__toggleaction_id_2 = new switch_::ToggleAction<>(bedroom_socket2);
  automation_id_3->add_actions({switch__toggleaction_id, switch__toggleaction_id_2});
  switch_bedroom_sockets->set_component_source("gpio.binary_sensor");
  App.register_component(switch_bedroom_sockets);
  sx1509_sx1509gpiopin_id_3 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_3->set_parent(expander1);
  sx1509_sx1509gpiopin_id_3->set_pin(2);
  sx1509_sx1509gpiopin_id_3->set_inverted(true);
  sx1509_sx1509gpiopin_id_3->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_bedroom_sockets->set_pin(sx1509_sx1509gpiopin_id_3);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 3
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_4
  //   id: switch_bedroom_fan1
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_4
  //   on_press:
  //   - then:
  //     - fan.toggle:
  //         id: bedroom_fan1
  //       type_id: fan_toggleaction_id
  //     automation_id: automation_id_4
  //     trigger_id: binary_sensor_presstrigger_id_4
  //   disabled_by_default: false
  //   name: switch_bedroom_fan1
  switch_bedroom_fan1 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_bedroom_fan1);
  switch_bedroom_fan1->set_name("switch_bedroom_fan1");
  switch_bedroom_fan1->set_object_id("switch_bedroom_fan1");
  switch_bedroom_fan1->set_disabled_by_default(false);
  switch_bedroom_fan1->set_internal(true);
  binary_sensor_delayedonfilter_id_4 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_4->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_4);
  binary_sensor_delayedonfilter_id_4->set_delay(10);
  switch_bedroom_fan1->add_filters({binary_sensor_delayedonfilter_id_4});
  binary_sensor_presstrigger_id_4 = new binary_sensor::PressTrigger(switch_bedroom_fan1);
  automation_id_4 = new Automation<>(binary_sensor_presstrigger_id_4);
  fan_toggleaction_id = new fan::ToggleAction<>(bedroom_fan1);
  automation_id_4->add_actions({fan_toggleaction_id});
  switch_bedroom_fan1->set_component_source("gpio.binary_sensor");
  App.register_component(switch_bedroom_fan1);
  sx1509_sx1509gpiopin_id_4 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_4->set_parent(expander1);
  sx1509_sx1509gpiopin_id_4->set_pin(3);
  sx1509_sx1509gpiopin_id_4->set_inverted(true);
  sx1509_sx1509gpiopin_id_4->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_bedroom_fan1->set_pin(sx1509_sx1509gpiopin_id_4);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 4
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_5
  //   id: switch_all_off
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_5
  //   on_press:
  //   - then:
  //     - light.turn_off:
  //         id: bedroom_light1
  //         state: false
  //       type_id: light_lightcontrolaction_id
  //     - light.turn_off:
  //         id: bedroom_light2
  //         state: false
  //       type_id: light_lightcontrolaction_id_2
  //     - light.turn_off:
  //         id: bedroom_light3
  //         state: false
  //       type_id: light_lightcontrolaction_id_3
  //     - light.turn_off:
  //         id: bedroom_light4
  //         state: false
  //       type_id: light_lightcontrolaction_id_4
  //     - light.turn_off:
  //         id: bathroom_light1
  //         state: false
  //       type_id: light_lightcontrolaction_id_5
  //     - light.turn_off:
  //         id: bathroom_light2
  //         state: false
  //       type_id: light_lightcontrolaction_id_6
  //     - switch.turn_off:
  //         id: bedroom_socket1
  //       type_id: switch__turnoffaction_id
  //     - switch.turn_off:
  //         id: bedroom_socket2
  //       type_id: switch__turnoffaction_id_2
  //     - fan.turn_off:
  //         id: bedroom_fan1
  //       type_id: fan_turnoffaction_id
  //     automation_id: automation_id_5
  //     trigger_id: binary_sensor_presstrigger_id_5
  //   disabled_by_default: false
  //   name: switch_all_off
  switch_all_off = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_all_off);
  switch_all_off->set_name("switch_all_off");
  switch_all_off->set_object_id("switch_all_off");
  switch_all_off->set_disabled_by_default(false);
  switch_all_off->set_internal(true);
  binary_sensor_delayedonfilter_id_5 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_5->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_5);
  binary_sensor_delayedonfilter_id_5->set_delay(10);
  switch_all_off->add_filters({binary_sensor_delayedonfilter_id_5});
  binary_sensor_presstrigger_id_5 = new binary_sensor::PressTrigger(switch_all_off);
  automation_id_5 = new Automation<>(binary_sensor_presstrigger_id_5);
  light_lightcontrolaction_id = new light::LightControlAction<>(bedroom_light1);
  light_lightcontrolaction_id->set_state(false);
  light_lightcontrolaction_id_2 = new light::LightControlAction<>(bedroom_light2);
  light_lightcontrolaction_id_2->set_state(false);
  light_lightcontrolaction_id_3 = new light::LightControlAction<>(bedroom_light3);
  light_lightcontrolaction_id_3->set_state(false);
  light_lightcontrolaction_id_4 = new light::LightControlAction<>(bedroom_light4);
  light_lightcontrolaction_id_4->set_state(false);
  light_lightcontrolaction_id_5 = new light::LightControlAction<>(bathroom_light1);
  light_lightcontrolaction_id_5->set_state(false);
  light_lightcontrolaction_id_6 = new light::LightControlAction<>(bathroom_light2);
  light_lightcontrolaction_id_6->set_state(false);
  switch__turnoffaction_id = new switch_::TurnOffAction<>(bedroom_socket1);
  switch__turnoffaction_id_2 = new switch_::TurnOffAction<>(bedroom_socket2);
  fan_turnoffaction_id = new fan::TurnOffAction<>(bedroom_fan1);
  automation_id_5->add_actions({light_lightcontrolaction_id, light_lightcontrolaction_id_2, light_lightcontrolaction_id_3, light_lightcontrolaction_id_4, light_lightcontrolaction_id_5, light_lightcontrolaction_id_6, switch__turnoffaction_id, switch__turnoffaction_id_2, fan_turnoffaction_id});
  switch_all_off->set_component_source("gpio.binary_sensor");
  App.register_component(switch_all_off);
  sx1509_sx1509gpiopin_id_5 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_5->set_parent(expander1);
  sx1509_sx1509gpiopin_id_5->set_pin(4);
  sx1509_sx1509gpiopin_id_5->set_inverted(true);
  sx1509_sx1509gpiopin_id_5->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_all_off->set_pin(sx1509_sx1509gpiopin_id_5);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 5
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_6
  //   id: switch_all_on
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_6
  //   on_press:
  //   - then:
  //     - light.turn_on:
  //         id: bedroom_light1
  //         state: true
  //       type_id: light_lightcontrolaction_id_7
  //     - light.turn_on:
  //         id: bedroom_light2
  //         state: true
  //       type_id: light_lightcontrolaction_id_8
  //     - light.turn_on:
  //         id: bedroom_light3
  //         state: true
  //       type_id: light_lightcontrolaction_id_9
  //     - light.turn_on:
  //         id: bedroom_light4
  //         state: true
  //       type_id: light_lightcontrolaction_id_10
  //     - light.turn_on:
  //         id: bathroom_light1
  //         state: true
  //       type_id: light_lightcontrolaction_id_11
  //     - light.turn_on:
  //         id: bathroom_light2
  //         state: true
  //       type_id: light_lightcontrolaction_id_12
  //     - switch.turn_on:
  //         id: bedroom_socket1
  //       type_id: switch__turnonaction_id
  //     - switch.turn_on:
  //         id: bedroom_socket2
  //       type_id: switch__turnonaction_id_2
  //     - fan.turn_on:
  //         id: bedroom_fan1
  //       type_id: fan_turnonaction_id
  //     automation_id: automation_id_6
  //     trigger_id: binary_sensor_presstrigger_id_6
  //   disabled_by_default: false
  //   name: switch_all_on
  switch_all_on = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_all_on);
  switch_all_on->set_name("switch_all_on");
  switch_all_on->set_object_id("switch_all_on");
  switch_all_on->set_disabled_by_default(false);
  switch_all_on->set_internal(true);
  binary_sensor_delayedonfilter_id_6 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_6->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_6);
  binary_sensor_delayedonfilter_id_6->set_delay(10);
  switch_all_on->add_filters({binary_sensor_delayedonfilter_id_6});
  binary_sensor_presstrigger_id_6 = new binary_sensor::PressTrigger(switch_all_on);
  automation_id_6 = new Automation<>(binary_sensor_presstrigger_id_6);
  light_lightcontrolaction_id_7 = new light::LightControlAction<>(bedroom_light1);
  light_lightcontrolaction_id_7->set_state(true);
  light_lightcontrolaction_id_8 = new light::LightControlAction<>(bedroom_light2);
  light_lightcontrolaction_id_8->set_state(true);
  light_lightcontrolaction_id_9 = new light::LightControlAction<>(bedroom_light3);
  light_lightcontrolaction_id_9->set_state(true);
  light_lightcontrolaction_id_10 = new light::LightControlAction<>(bedroom_light4);
  light_lightcontrolaction_id_10->set_state(true);
  light_lightcontrolaction_id_11 = new light::LightControlAction<>(bathroom_light1);
  light_lightcontrolaction_id_11->set_state(true);
  light_lightcontrolaction_id_12 = new light::LightControlAction<>(bathroom_light2);
  light_lightcontrolaction_id_12->set_state(true);
  switch__turnonaction_id = new switch_::TurnOnAction<>(bedroom_socket1);
  switch__turnonaction_id_2 = new switch_::TurnOnAction<>(bedroom_socket2);
  fan_turnonaction_id = new fan::TurnOnAction<>(bedroom_fan1);
  automation_id_6->add_actions({light_lightcontrolaction_id_7, light_lightcontrolaction_id_8, light_lightcontrolaction_id_9, light_lightcontrolaction_id_10, light_lightcontrolaction_id_11, light_lightcontrolaction_id_12, switch__turnonaction_id, switch__turnonaction_id_2, fan_turnonaction_id});
  switch_all_on->set_component_source("gpio.binary_sensor");
  App.register_component(switch_all_on);
  sx1509_sx1509gpiopin_id_6 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_6->set_parent(expander1);
  sx1509_sx1509gpiopin_id_6->set_pin(5);
  sx1509_sx1509gpiopin_id_6->set_inverted(true);
  sx1509_sx1509gpiopin_id_6->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_all_on->set_pin(sx1509_sx1509gpiopin_id_6);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 8
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_7
  //   id: hard_switch_bedroom_light1
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_7
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bedroom_light1
  //       type_id: light_toggleaction_id_7
  //     - light.toggle:
  //         id: bedroom_light2
  //       type_id: light_toggleaction_id_8
  //     automation_id: automation_id_7
  //     trigger_id: binary_sensor_presstrigger_id_7
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_light1
  hard_switch_bedroom_light1 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_light1);
  hard_switch_bedroom_light1->set_name("hard_switch_bedroom_light1");
  hard_switch_bedroom_light1->set_object_id("hard_switch_bedroom_light1");
  hard_switch_bedroom_light1->set_disabled_by_default(false);
  hard_switch_bedroom_light1->set_internal(true);
  binary_sensor_delayedonfilter_id_7 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_7->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_7);
  binary_sensor_delayedonfilter_id_7->set_delay(10);
  hard_switch_bedroom_light1->add_filters({binary_sensor_delayedonfilter_id_7});
  binary_sensor_presstrigger_id_7 = new binary_sensor::PressTrigger(hard_switch_bedroom_light1);
  automation_id_7 = new Automation<>(binary_sensor_presstrigger_id_7);
  light_toggleaction_id_7 = new light::ToggleAction<>(bedroom_light1);
  light_toggleaction_id_8 = new light::ToggleAction<>(bedroom_light2);
  automation_id_7->add_actions({light_toggleaction_id_7, light_toggleaction_id_8});
  hard_switch_bedroom_light1->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_light1);
  sx1509_sx1509gpiopin_id_7 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_7->set_parent(expander2);
  sx1509_sx1509gpiopin_id_7->set_pin(8);
  sx1509_sx1509gpiopin_id_7->set_inverted(true);
  sx1509_sx1509gpiopin_id_7->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_light1->set_pin(sx1509_sx1509gpiopin_id_7);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 9
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_8
  //   id: hard_switch_bedroom_light2
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_8
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bedroom_light3
  //       type_id: light_toggleaction_id_9
  //     automation_id: automation_id_8
  //     trigger_id: binary_sensor_presstrigger_id_8
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_light2
  hard_switch_bedroom_light2 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_light2);
  hard_switch_bedroom_light2->set_name("hard_switch_bedroom_light2");
  hard_switch_bedroom_light2->set_object_id("hard_switch_bedroom_light2");
  hard_switch_bedroom_light2->set_disabled_by_default(false);
  hard_switch_bedroom_light2->set_internal(true);
  binary_sensor_delayedonfilter_id_8 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_8->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_8);
  binary_sensor_delayedonfilter_id_8->set_delay(10);
  hard_switch_bedroom_light2->add_filters({binary_sensor_delayedonfilter_id_8});
  binary_sensor_presstrigger_id_8 = new binary_sensor::PressTrigger(hard_switch_bedroom_light2);
  automation_id_8 = new Automation<>(binary_sensor_presstrigger_id_8);
  light_toggleaction_id_9 = new light::ToggleAction<>(bedroom_light3);
  automation_id_8->add_actions({light_toggleaction_id_9});
  hard_switch_bedroom_light2->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_light2);
  sx1509_sx1509gpiopin_id_8 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_8->set_parent(expander2);
  sx1509_sx1509gpiopin_id_8->set_pin(9);
  sx1509_sx1509gpiopin_id_8->set_inverted(true);
  sx1509_sx1509gpiopin_id_8->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_light2->set_pin(sx1509_sx1509gpiopin_id_8);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 10
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_9
  //   id: hard_switch_bedroom_light3
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_9
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bedroom_light4
  //       type_id: light_toggleaction_id_10
  //     automation_id: automation_id_9
  //     trigger_id: binary_sensor_presstrigger_id_9
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_light3
  hard_switch_bedroom_light3 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_light3);
  hard_switch_bedroom_light3->set_name("hard_switch_bedroom_light3");
  hard_switch_bedroom_light3->set_object_id("hard_switch_bedroom_light3");
  hard_switch_bedroom_light3->set_disabled_by_default(false);
  hard_switch_bedroom_light3->set_internal(true);
  binary_sensor_delayedonfilter_id_9 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_9->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_9);
  binary_sensor_delayedonfilter_id_9->set_delay(10);
  hard_switch_bedroom_light3->add_filters({binary_sensor_delayedonfilter_id_9});
  binary_sensor_presstrigger_id_9 = new binary_sensor::PressTrigger(hard_switch_bedroom_light3);
  automation_id_9 = new Automation<>(binary_sensor_presstrigger_id_9);
  light_toggleaction_id_10 = new light::ToggleAction<>(bedroom_light4);
  automation_id_9->add_actions({light_toggleaction_id_10});
  hard_switch_bedroom_light3->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_light3);
  sx1509_sx1509gpiopin_id_9 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_9->set_parent(expander2);
  sx1509_sx1509gpiopin_id_9->set_pin(10);
  sx1509_sx1509gpiopin_id_9->set_inverted(true);
  sx1509_sx1509gpiopin_id_9->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_light3->set_pin(sx1509_sx1509gpiopin_id_9);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 11
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_10
  //   id: hard_switch_bedroom_light4
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_10
  //   on_press:
  //   - then:
  //     - light.toggle:
  //         id: bathroom_light1
  //       type_id: light_toggleaction_id_11
  //     - light.toggle:
  //         id: bathroom_light2
  //       type_id: light_toggleaction_id_12
  //     automation_id: automation_id_10
  //     trigger_id: binary_sensor_presstrigger_id_10
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_light4
  hard_switch_bedroom_light4 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_light4);
  hard_switch_bedroom_light4->set_name("hard_switch_bedroom_light4");
  hard_switch_bedroom_light4->set_object_id("hard_switch_bedroom_light4");
  hard_switch_bedroom_light4->set_disabled_by_default(false);
  hard_switch_bedroom_light4->set_internal(true);
  binary_sensor_delayedonfilter_id_10 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_10->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_10);
  binary_sensor_delayedonfilter_id_10->set_delay(10);
  hard_switch_bedroom_light4->add_filters({binary_sensor_delayedonfilter_id_10});
  binary_sensor_presstrigger_id_10 = new binary_sensor::PressTrigger(hard_switch_bedroom_light4);
  automation_id_10 = new Automation<>(binary_sensor_presstrigger_id_10);
  light_toggleaction_id_11 = new light::ToggleAction<>(bathroom_light1);
  light_toggleaction_id_12 = new light::ToggleAction<>(bathroom_light2);
  automation_id_10->add_actions({light_toggleaction_id_11, light_toggleaction_id_12});
  hard_switch_bedroom_light4->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_light4);
  sx1509_sx1509gpiopin_id_10 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_10->set_parent(expander2);
  sx1509_sx1509gpiopin_id_10->set_pin(11);
  sx1509_sx1509gpiopin_id_10->set_inverted(true);
  sx1509_sx1509gpiopin_id_10->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_light4->set_pin(sx1509_sx1509gpiopin_id_10);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 12
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_11
  //   id: hard_switch_bedroom_socket1
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_11
  //   on_press:
  //   - then:
  //     - switch.toggle:
  //         id: bedroom_socket1
  //       type_id: switch__toggleaction_id_3
  //     automation_id: automation_id_11
  //     trigger_id: binary_sensor_presstrigger_id_11
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_socket1
  hard_switch_bedroom_socket1 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_socket1);
  hard_switch_bedroom_socket1->set_name("hard_switch_bedroom_socket1");
  hard_switch_bedroom_socket1->set_object_id("hard_switch_bedroom_socket1");
  hard_switch_bedroom_socket1->set_disabled_by_default(false);
  hard_switch_bedroom_socket1->set_internal(true);
  binary_sensor_delayedonfilter_id_11 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_11->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_11);
  binary_sensor_delayedonfilter_id_11->set_delay(10);
  hard_switch_bedroom_socket1->add_filters({binary_sensor_delayedonfilter_id_11});
  binary_sensor_presstrigger_id_11 = new binary_sensor::PressTrigger(hard_switch_bedroom_socket1);
  automation_id_11 = new Automation<>(binary_sensor_presstrigger_id_11);
  switch__toggleaction_id_3 = new switch_::ToggleAction<>(bedroom_socket1);
  automation_id_11->add_actions({switch__toggleaction_id_3});
  hard_switch_bedroom_socket1->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_socket1);
  sx1509_sx1509gpiopin_id_11 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_11->set_parent(expander2);
  sx1509_sx1509gpiopin_id_11->set_pin(12);
  sx1509_sx1509gpiopin_id_11->set_inverted(true);
  sx1509_sx1509gpiopin_id_11->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_socket1->set_pin(sx1509_sx1509gpiopin_id_11);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander2
  //     number: 14
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_12
  //   id: hard_switch_bedroom_socket2
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_12
  //   on_press:
  //   - then:
  //     - switch.toggle:
  //         id: bedroom_socket2
  //       type_id: switch__toggleaction_id_4
  //     automation_id: automation_id_12
  //     trigger_id: binary_sensor_presstrigger_id_12
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_socket2
  hard_switch_bedroom_socket2 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_socket2);
  hard_switch_bedroom_socket2->set_name("hard_switch_bedroom_socket2");
  hard_switch_bedroom_socket2->set_object_id("hard_switch_bedroom_socket2");
  hard_switch_bedroom_socket2->set_disabled_by_default(false);
  hard_switch_bedroom_socket2->set_internal(true);
  binary_sensor_delayedonfilter_id_12 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_12->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_12);
  binary_sensor_delayedonfilter_id_12->set_delay(10);
  hard_switch_bedroom_socket2->add_filters({binary_sensor_delayedonfilter_id_12});
  binary_sensor_presstrigger_id_12 = new binary_sensor::PressTrigger(hard_switch_bedroom_socket2);
  automation_id_12 = new Automation<>(binary_sensor_presstrigger_id_12);
  switch__toggleaction_id_4 = new switch_::ToggleAction<>(bedroom_socket2);
  automation_id_12->add_actions({switch__toggleaction_id_4});
  hard_switch_bedroom_socket2->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_socket2);
  sx1509_sx1509gpiopin_id_12 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_12->set_parent(expander2);
  sx1509_sx1509gpiopin_id_12->set_pin(14);
  sx1509_sx1509gpiopin_id_12->set_inverted(true);
  sx1509_sx1509gpiopin_id_12->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_socket2->set_pin(sx1509_sx1509gpiopin_id_12);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: true
  //   pin:
  //     sx1509: expander1
  //     number: 15
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: sx1509_sx1509gpiopin_id_13
  //   id: hard_switch_bedroom_fan1
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_id_13
  //   on_press:
  //   - then:
  //     - fan.toggle:
  //         id: bedroom_fan1
  //       type_id: fan_toggleaction_id_2
  //     automation_id: automation_id_13
  //     trigger_id: binary_sensor_presstrigger_id_13
  //   disabled_by_default: false
  //   name: hard_switch_bedroom_fan1
  hard_switch_bedroom_fan1 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(hard_switch_bedroom_fan1);
  hard_switch_bedroom_fan1->set_name("hard_switch_bedroom_fan1");
  hard_switch_bedroom_fan1->set_object_id("hard_switch_bedroom_fan1");
  hard_switch_bedroom_fan1->set_disabled_by_default(false);
  hard_switch_bedroom_fan1->set_internal(true);
  binary_sensor_delayedonfilter_id_13 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_13->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_id_13);
  binary_sensor_delayedonfilter_id_13->set_delay(10);
  hard_switch_bedroom_fan1->add_filters({binary_sensor_delayedonfilter_id_13});
  binary_sensor_presstrigger_id_13 = new binary_sensor::PressTrigger(hard_switch_bedroom_fan1);
  automation_id_13 = new Automation<>(binary_sensor_presstrigger_id_13);
  fan_toggleaction_id_2 = new fan::ToggleAction<>(bedroom_fan1);
  automation_id_13->add_actions({fan_toggleaction_id_2});
  hard_switch_bedroom_fan1->set_component_source("gpio.binary_sensor");
  App.register_component(hard_switch_bedroom_fan1);
  sx1509_sx1509gpiopin_id_13 = new sx1509::SX1509GPIOPin();
  sx1509_sx1509gpiopin_id_13->set_parent(expander1);
  sx1509_sx1509gpiopin_id_13->set_pin(15);
  sx1509_sx1509gpiopin_id_13->set_inverted(true);
  sx1509_sx1509gpiopin_id_13->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  hard_switch_bedroom_fan1->set_pin(sx1509_sx1509gpiopin_id_13);
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
