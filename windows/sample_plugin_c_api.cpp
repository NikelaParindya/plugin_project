#include "include/sample_plugin/sample_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "sample_plugin.h"

void SamplePluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  sample_plugin::SamplePlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
