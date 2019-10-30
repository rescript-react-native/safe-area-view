module Provider = {
  [@bs.module "react-native-safe-area-context"] [@react.component]
  external make: (~children: React.element) => React.element =
    "SafeAreaProvider";
};

module View = {
  type inset;

  [@bs.obj]
  external inset:
    (
      ~top: [@bs.string] [ | `always | `never]=?,
      ~bottom: [@bs.string] [ | `always | `never]=?,
      ~left: [@bs.string] [ | `always | `never]=?,
      ~right: [@bs.string] [ | `always | `never]=?,
      ~vertical: [@bs.string] [ | `always | `never]=?,
      ~horizontal: [@bs.string] [ | `always | `never]=?,
      unit
    ) =>
    inset =
    "";

  [@bs.module "react-native-safe-area-view"] [@react.component]
  external make:
    (
      ~style: ReactNative.Style.t=?,
      ~forceInset: inset=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};
