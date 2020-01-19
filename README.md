# `@reason-react-native/safe-area-view`

[![Build Status](https://github.com/reason-react-native/safe-area-view/workflows/Build/badge.svg)](https://github.com/reason-react-native/safe-area-view/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/safe-area-view.svg)](https://www.npmjs.com/@reason-react-native/safe-area-view)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/react-native-safe-area-view`](https://github.com/react-native-community/react-native-safe-area-view).

Exposed as `ReactNativeSafeAreaView` module.

`@reason-react-native/safe-area-view` X.y._ means it's compatible with
`@react-native-community/react-native-safe-area-view` X.y._

## Installation

When
[`@react-native-community/react-native-safe-area-view`](`https://github.com/react-native-community/react-native-safe-area-view`)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/safe-area-view
# or
yarn add @reason-react-native/safe-area-view
```

`@reason-react-native/safe-area-view` should be added to `bs-dependencies` in
your `bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/safe-area-view"
  ],
  //...
}
```

## Usage

⚠️ In order to avoid name collision (`SafeAreaView` is already defined in React
Native), the components are scoped in `SafeArea`. Checkout this example :

```reason
open ReactNative
open ReactNativeSafeAreaView;

module MyApp = {
  let styles = Style.(
    StyleSheet.create({
      "safeAreaView": viewStyle(~flex=1., ())
    })
  );

  [@react.component]
  let make = () => {
    <SafeArea.View style=styles##safeAreaView>
      <View>
        <Text>
          "Hello world"->React.string
        </Text>
      </View>
    </SafeArea.View>
  }
};

[@react.component]
let make = () => {
  <SafeArea.Provider>
    <MyApp />
  </SafeArea.Provider>
};
```

### Usage with forceInset

```reason
open ReactNative
open ReactNativeSafeAreaView;

[@react.component]
let make = () => {
  <SafeArea.View forceInset=SafeArea.View.inset(~top=`always, ())>
    <View>
      <Text>
        "Hello world"->React.string
      </Text>
    </View>
  </SafeArea.View>
};
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
