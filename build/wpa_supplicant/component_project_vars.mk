# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(PROJECT_PATH)/components/wpa_supplicant/include $(PROJECT_PATH)/components/wpa_supplicant/port/include $(PROJECT_PATH)/components/wpa_supplicant/../esp32/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/wpa_supplicant -lwpa_supplicant
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += wpa_supplicant
wpa_supplicant-build: 
