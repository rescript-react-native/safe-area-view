module Provider = {
  @module("react-native-safe-area-context") @react.component
  external make: (~children: React.element) => React.element = "SafeAreaProvider"
}

module View = {
  type insetValue = [#always | #never]

  type inset

  @obj
  external inset: (
    ~top: insetValue=?,
    ~bottom: insetValue=?,
    ~left: insetValue=?,
    ~right: insetValue=?,
    ~vertical: insetValue=?,
    ~horizontal: insetValue=?,
    unit,
  ) => inset = ""

  @module("react-native-safe-area-view") @react.component
  external make: (
    ~style: ReactNative.Style.t=?,
    ~forceInset: inset=?,
    ~children: React.element,
  ) => React.element = "default"
}
