# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\chuck.erhardt\Documents\GitHub\PSoC-W5100-Driver\PSoCPioneer+ArduinoShield_SPIM_Example.cydsn\PSoCPioneer+ArduinoShield_SPIM_Example.cyprj
# Date: Wed, 15 Jan 2014 18:19:51 GMT
#set_units -time ns
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_generated_clock -name {SPI0_IntClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list [get_pins {ClockBlock/udb_div_0}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]


# Component constraints for C:\Users\chuck.erhardt\Documents\GitHub\PSoC-W5100-Driver\PSoCPioneer+ArduinoShield_SPIM_Example.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\chuck.erhardt\Documents\GitHub\PSoC-W5100-Driver\PSoCPioneer+ArduinoShield_SPIM_Example.cydsn\PSoCPioneer+ArduinoShield_SPIM_Example.cyprj
# Date: Wed, 15 Jan 2014 18:19:45 GMT
