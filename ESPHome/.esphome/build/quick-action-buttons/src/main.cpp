// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer;
gpio::GPIOBinarySensor *switch_button1;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger;
Automation<> *automation;
LambdaAction<> *lambdaaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_2;
Automation<> *automation_2;
LambdaAction<> *lambdaaction_2;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_2;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_3;
Automation<> *automation_3;
LambdaAction<> *lambdaaction_3;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
gpio::GPIOBinarySensor *switch_button2;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_2;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_4;
Automation<> *automation_4;
LambdaAction<> *lambdaaction_4;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_4;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_5;
Automation<> *automation_5;
LambdaAction<> *lambdaaction_5;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_5;
binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_6;
Automation<> *automation_6;
LambdaAction<> *lambdaaction_6;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_6;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {INPUT_PULLUP, 255, INPUT_PULLUP, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
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
  //   board: esp01_1m
  //   framework:
  //     version: 3.0.2
  //     source: ~3.30002.0
  //     platform_version: platformio/espressif8266@3.2.0
  //   restore_from_flash: false
  //   early_pin_init: true
  //   board_flash_mode: dout
  esphome::esp8266::setup_preferences();
  // async_tcp:
  //   {}
  // esphome:
  //   name: quick-action-buttons
  //   friendly_name: Quick Action Buttons
  //   build_path: build/quick-action-buttons
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2023.10.5
  App.pre_setup("quick-action-buttons", "Quick Action Buttons", "", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.100.97
  //     gateway: 192.168.100.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Quick Action Fallback Hotspot
  //     password: !secret 'fallback_pass'
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_pass'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: 192.168.100.97
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.100.97");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Thapar");
  wifi_wifiap_2.set_password("Agasthya4572$:th");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 100, 97),
      .gateway = network::IPAddress(192, 168, 100, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Quick Action Fallback Hotspot");
  wifi_wifiap.set_password("Agasthya4572$:es");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_passive_scan(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_enable_on_boot(true);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  //   services: []
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   password: !secret 'ota_pass'
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("Agatshya4572$:esot");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: WZPdA8baZeCzh+XyCLUCWTaxeMnMiN4ArP3Vl4c6DEg=
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_apiserver->set_noise_psk({89, 147, 221, 3, 198, 218, 101, 224, 179, 135, 229, 242, 8, 181, 2, 89, 54, 177, 120, 201, 204, 136, 222, 0, 172, 253, 213, 151, 135, 58, 12, 72});
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: false
  //   pin:
  //     number: 0
  //     mode:
  //       input: true
  //       pullup: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: esphome_esp8266_esp8266gpiopin
  //   id: switch_button1
  //   name: Button 1
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter
  //   on_multi_click:
  //   - timing:
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 500ms
  //     then:
  //     - logger.log:
  //         format: Button 1 Single Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 1 Single
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction
  //     automation_id: automation
  //     trigger_id: binary_sensor_multiclicktrigger
  //     invalid_cooldown: 1s
  //   - timing:
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 200ms
  //     then:
  //     - logger.log:
  //         format: Button 1 Double Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_2
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 1 Double
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_2
  //     automation_id: automation_2
  //     trigger_id: binary_sensor_multiclicktrigger_2
  //     invalid_cooldown: 1s
  //   - timing:
  //     - state: true
  //       min_length: 1s
  //       max_length: 2s
  //     - state: false
  //       min_length: 500ms
  //     then:
  //     - logger.log:
  //         format: Button 1 Long Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_3
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 1 Long
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_3
  //     automation_id: automation_3
  //     trigger_id: binary_sensor_multiclicktrigger_3
  //     invalid_cooldown: 1s
  //   disabled_by_default: false
  switch_button1 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_button1);
  switch_button1->set_name("Button 1");
  switch_button1->set_object_id("button_1");
  switch_button1->set_disabled_by_default(false);
  switch_button1->set_internal(false);
  binary_sensor_delayedonfilter = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter);
  binary_sensor_delayedonfilter->set_delay(10);
  switch_button1->add_filters({binary_sensor_delayedonfilter});
  binary_sensor_multiclicktrigger = new binary_sensor::MultiClickTrigger(switch_button1, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 500,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger);
  automation = new Automation<>(binary_sensor_multiclicktrigger);
  lambdaaction = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 1 Single Clicked");
  });
  api_homeassistantservicecallaction = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction->add_data("message", "Button 1 Single");
  automation->add_actions({lambdaaction, api_homeassistantservicecallaction});
  binary_sensor_multiclicktrigger_2 = new binary_sensor::MultiClickTrigger(switch_button1, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 200,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_2->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_2->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger_2);
  automation_2 = new Automation<>(binary_sensor_multiclicktrigger_2);
  lambdaaction_2 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 1 Double Clicked");
  });
  api_homeassistantservicecallaction_2 = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction_2->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction_2->add_data("message", "Button 1 Double");
  automation_2->add_actions({lambdaaction_2, api_homeassistantservicecallaction_2});
  binary_sensor_multiclicktrigger_3 = new binary_sensor::MultiClickTrigger(switch_button1, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 1000,
      .max_length = 2000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 500,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_3->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_3->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger_3);
  automation_3 = new Automation<>(binary_sensor_multiclicktrigger_3);
  lambdaaction_3 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 1 Long Clicked");
  });
  api_homeassistantservicecallaction_3 = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction_3->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction_3->add_data("message", "Button 1 Long");
  automation_3->add_actions({lambdaaction_3, api_homeassistantservicecallaction_3});
  switch_button1->set_component_source("gpio.binary_sensor");
  App.register_component(switch_button1);
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(0);
  esphome_esp8266_esp8266gpiopin->set_inverted(true);
  esphome_esp8266_esp8266gpiopin->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_button1->set_pin(esphome_esp8266_esp8266gpiopin);
  // binary_sensor.gpio:
  //   platform: gpio
  //   internal: false
  //   pin:
  //     number: 2
  //     mode:
  //       input: true
  //       pullup: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: esphome_esp8266_esp8266gpiopin_2
  //   id: switch_button2
  //   name: Button 2
  //   filters:
  //   - delayed_on: 10ms
  //     type_id: binary_sensor_delayedonfilter_2
  //   on_multi_click:
  //   - timing:
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 500ms
  //     then:
  //     - logger.log:
  //         format: Button 2 Singe Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_4
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 2 Single
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_4
  //     automation_id: automation_4
  //     trigger_id: binary_sensor_multiclicktrigger_4
  //     invalid_cooldown: 1s
  //   - timing:
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: true
  //       min_length: 0ms
  //       max_length: 1s
  //     - state: false
  //       min_length: 200ms
  //     then:
  //     - logger.log:
  //         format: Button 2 Double Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_5
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 2 Double
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_5
  //     automation_id: automation_5
  //     trigger_id: binary_sensor_multiclicktrigger_5
  //     invalid_cooldown: 1s
  //   - timing:
  //     - state: true
  //       min_length: 1s
  //       max_length: 2s
  //     - state: false
  //       min_length: 500ms
  //     then:
  //     - logger.log:
  //         format: Button 2 Long Clicked
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_6
  //     - homeassistant.event:
  //         event: esphome.button_pressed
  //         data:
  //           message: Button 2 Long
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_6
  //     automation_id: automation_6
  //     trigger_id: binary_sensor_multiclicktrigger_6
  //     invalid_cooldown: 1s
  //   disabled_by_default: false
  switch_button2 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(switch_button2);
  switch_button2->set_name("Button 2");
  switch_button2->set_object_id("button_2");
  switch_button2->set_disabled_by_default(false);
  switch_button2->set_internal(false);
  binary_sensor_delayedonfilter_2 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_2->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter_2);
  binary_sensor_delayedonfilter_2->set_delay(10);
  switch_button2->add_filters({binary_sensor_delayedonfilter_2});
  binary_sensor_multiclicktrigger_4 = new binary_sensor::MultiClickTrigger(switch_button2, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 500,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_4->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_4->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger_4);
  automation_4 = new Automation<>(binary_sensor_multiclicktrigger_4);
  lambdaaction_4 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 2 Singe Clicked");
  });
  api_homeassistantservicecallaction_4 = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction_4->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction_4->add_data("message", "Button 2 Single");
  automation_4->add_actions({lambdaaction_4, api_homeassistantservicecallaction_4});
  binary_sensor_multiclicktrigger_5 = new binary_sensor::MultiClickTrigger(switch_button2, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 1000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 200,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_5->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_5->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger_5);
  automation_5 = new Automation<>(binary_sensor_multiclicktrigger_5);
  lambdaaction_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 2 Double Clicked");
  });
  api_homeassistantservicecallaction_5 = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction_5->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction_5->add_data("message", "Button 2 Double");
  automation_5->add_actions({lambdaaction_5, api_homeassistantservicecallaction_5});
  binary_sensor_multiclicktrigger_6 = new binary_sensor::MultiClickTrigger(switch_button2, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 1000,
      .max_length = 2000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 500,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_6->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_6->set_component_source("binary_sensor");
  App.register_component(binary_sensor_multiclicktrigger_6);
  automation_6 = new Automation<>(binary_sensor_multiclicktrigger_6);
  lambdaaction_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Button 2 Long Clicked");
  });
  api_homeassistantservicecallaction_6 = new api::HomeAssistantServiceCallAction<>(api_apiserver, true);
  api_homeassistantservicecallaction_6->set_service("esphome.button_pressed");
  api_homeassistantservicecallaction_6->add_data("message", "Button 2 Long");
  automation_6->add_actions({lambdaaction_6, api_homeassistantservicecallaction_6});
  switch_button2->set_component_source("gpio.binary_sensor");
  App.register_component(switch_button2);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(2);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(true);
  esphome_esp8266_esp8266gpiopin_2->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  switch_button2->set_pin(esphome_esp8266_esp8266gpiopin_2);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   enable_ipv6: false
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
