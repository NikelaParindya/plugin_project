#ifndef FLUTTER_PLUGIN_SAMPLE_PLUGIN_H_
#define FLUTTER_PLUGIN_SAMPLE_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace sample_plugin {

class SamplePlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  SamplePlugin();

  virtual ~SamplePlugin();

  // Disallow copy and assign.
  SamplePlugin(const SamplePlugin&) = delete;
  SamplePlugin& operator=(const SamplePlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace sample_plugin

#endif  // FLUTTER_PLUGIN_SAMPLE_PLUGIN_H_
