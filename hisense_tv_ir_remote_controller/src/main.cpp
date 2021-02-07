// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace switch_;
using namespace binary_sensor;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
template_::TemplateSwitch *template__templateswitch;
remote_receiver::RemoteReceiverComponent *remote_receiver_remotereceivercomponent;
remote_base::JVCDumper *remote_base_jvcdumper;
remote_transmitter::RemoteTransmitterComponent *remote_transmitter_remotetransmittercomponent;
Automation<> *automation_2;
remote_base::NECAction<> *remote_base_necaction_2;
remote_base::LGDumper *remote_base_lgdumper;
remote_base::NECDumper *remote_base_necdumper;
remote_base::PioneerDumper *remote_base_pioneerdumper;
Automation<> *automation;
remote_base::NECAction<> *remote_base_necaction;
remote_base::SonyDumper *remote_base_sonydumper;
remote_base::RawDumper *remote_base_rawdumper;
remote_base::RC5Dumper *remote_base_rc5dumper;
remote_base::RCSwitchDumper *remote_base_rcswitchdumper;
remote_base::SamsungDumper *remote_base_samsungdumper;
remote_base::PanasonicDumper *remote_base_panasonicdumper;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: hisense_tv_ir_remote_controller
  //   platform: ESP8266
  //   board: esp8285
  //   arduino_version: espressif8266@2.6.2
  //   build_path: hisense_tv_ir_remote_controller
  //   platformio_options: {}
  //   esp8266_restore_from_flash: false
  //   board_flash_mode: dout
  //   includes: []
  //   libraries: []
  App.pre_setup("hisense_tv_ir_remote_controller", __DATE__ ", " __TIME__);
  // switch:
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: !secret 'hisense_ir_ap_ssid'
  //     password: !secret 'hisense_ir_ap_password'
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: hisense_tv_ir_remote_controller.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("hisense_tv_ir_remote_controller.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("your.widi.ssid");
  wifi_wifiap_2.set_password("your.wifi.password");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("your.ap.ssid");
  wifi_wifiap.set_password("your.ap.password");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: !secret 'hass_ota_password'
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("your.ota.passwod");
  App.register_component(ota_otacomponent);
  ota_otacomponent->start_safe_mode(10, 300000);
  // api:
  //   password: !secret 'hass_ota_password'
  //   id: api_apiserver
  //   port: 6053
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("your.api.passwod");
  api_apiserver->set_reboot_timeout(900000);
  // remote_receiver:
  //   pin:
  //     number: 14
  //     inverted: true
  //     mode: INPUT
  //   dump:
  //   - jvc: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_jvcdumper
  //   - lg: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_lgdumper
  //   - nec: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_necdumper
  //   - pioneer: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_pioneerdumper
  //   - sony: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_sonydumper
  //   - raw: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_rawdumper
  //   - rc5: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_rc5dumper
  //   - rc_switch: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_rcswitchdumper
  //   - samsung: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_samsungdumper
  //   - panasonic: {}
  //     receiver_id: remote_receiver_remotereceivercomponent
  //     type_id: remote_base_panasonicdumper
  //   id: remote_receiver_remotereceivercomponent
  //   tolerance: 25
  //   buffer_size: 1000
  //   filter: 50us
  //   idle: 10ms
  //   memory_blocks: 3
  // remote_transmitter:
  //   pin:
  //     number: 4
  //     mode: OUTPUT
  //     inverted: false
  //   carrier_duty_percent: 70
  //   id: remote_transmitter_remotetransmittercomponent
  // switch.template:
  //   platform: template
  //   name: Hisense TV IR Remote Controller
  //   turn_on_action:
  //     then:
  //     - remote_transmitter.transmit_nec:
  //         address: 0xFD
  //         command: 0xB04F
  //         repeat:
  //           times: 1
  //           wait_time: 50ms
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_necaction
  //     trigger_id: trigger
  //     automation_id: automation
  //   turn_off_action:
  //     then:
  //     - remote_transmitter.transmit_nec:
  //         address: 0xFD
  //         command: 0xB04F
  //         repeat:
  //           times: 1
  //           wait_time: 50ms
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_necaction_2
  //     trigger_id: trigger_2
  //     automation_id: automation_2
  //   id: template__templateswitch
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  template__templateswitch = new template_::TemplateSwitch();
  App.register_component(template__templateswitch);
  remote_receiver_remotereceivercomponent = new remote_receiver::RemoteReceiverComponent(new GPIOPin(14, INPUT, true));
  remote_base_jvcdumper = new remote_base::JVCDumper();
  remote_transmitter_remotetransmittercomponent = new remote_transmitter::RemoteTransmitterComponent(new GPIOPin(4, OUTPUT, false));
  App.register_component(remote_transmitter_remotetransmittercomponent);
  App.register_switch(template__templateswitch);
  template__templateswitch->set_name("Hisense TV IR Remote Controller");
  remote_transmitter_remotetransmittercomponent->set_carrier_duty_percent(70);
  automation_2 = new Automation<>(template__templateswitch->get_turn_off_trigger());
  remote_base_necaction_2 = new remote_base::NECAction<>();
  remote_base_necaction_2->set_parent(remote_transmitter_remotetransmittercomponent);
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_jvcdumper);
  remote_base_lgdumper = new remote_base::LGDumper();
  remote_base_necaction_2->set_send_times(1);
  remote_base_necaction_2->set_send_wait(50000);
  remote_base_necaction_2->set_address(0xFD);
  remote_base_necaction_2->set_command(0xB04F);
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_lgdumper);
  remote_base_necdumper = new remote_base::NECDumper();
  automation_2->add_actions({remote_base_necaction_2});
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_necdumper);
  remote_base_pioneerdumper = new remote_base::PioneerDumper();
  automation = new Automation<>(template__templateswitch->get_turn_on_trigger());
  remote_base_necaction = new remote_base::NECAction<>();
  remote_base_necaction->set_parent(remote_transmitter_remotetransmittercomponent);
  remote_base_necaction->set_send_times(1);
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_pioneerdumper);
  remote_base_sonydumper = new remote_base::SonyDumper();
  remote_base_necaction->set_send_wait(50000);
  remote_base_necaction->set_address(0xFD);
  remote_base_necaction->set_command(0xB04F);
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_sonydumper);
  remote_base_rawdumper = new remote_base::RawDumper();
  automation->add_actions({remote_base_necaction});
  template__templateswitch->set_optimistic(false);
  template__templateswitch->set_assumed_state(false);
  template__templateswitch->set_restore_state(false);
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_rawdumper);
  remote_base_rc5dumper = new remote_base::RC5Dumper();
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_rc5dumper);
  remote_base_rcswitchdumper = new remote_base::RCSwitchDumper();
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_rcswitchdumper);
  remote_base_samsungdumper = new remote_base::SamsungDumper();
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_samsungdumper);
  remote_base_panasonicdumper = new remote_base::PanasonicDumper();
  remote_receiver_remotereceivercomponent->register_dumper(remote_base_panasonicdumper);
  App.register_component(remote_receiver_remotereceivercomponent);
  remote_receiver_remotereceivercomponent->set_tolerance(25);
  remote_receiver_remotereceivercomponent->set_buffer_size(1000);
  remote_receiver_remotereceivercomponent->set_filter_us(50);
  remote_receiver_remotereceivercomponent->set_idle_us(10000);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
