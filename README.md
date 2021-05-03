# `@rescript-react-native/safe-area-view`

[![Build Status](https://github.com/rescript-react-native/safe-area-view/workflows/Build/badge.svg)](https://github.com/rescript-react-native/safe-area-view/actions)
[![Version](https://img.shields.io/npm/v/@rescript-react-native/safe-area-view.svg)](https://www.npmjs.com/@rescript-react-native/safe-area-view)
[![ReScript Forum](https://img.shields.io/discourse/posts?color=e6484f&label=ReScript%20Forum&server=https%3A%2F%2Fforum.rescript-lang.org)](https://forum.rescript-lang.org/)

[ReScript](https://rescript-lang.org) bindings for
[`react-native-safe-area-view`](https://github.com/react-navigation/react-native-safe-area-view).

Exposed as `ReactNativeSafeAreaView` module.

`@rescript-react-native/safe-area-view` X.y.\* means it's compatible with
`react-native-safe-area-view` X.y.\*

## Installation

When
[`react-native-safe-area-view`](https://github.com/react-navigation/react-native-safe-area-view)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @rescript-react-native/safe-area-view
# or
yarn add @rescript-react-native/safe-area-view
```

`@rescript-react-native/safe-area-view` should be added to `bs-dependencies` in
your `bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "@rescript/react",
    "rescript-react-native",
    // ...
+    "@rescript-react-native/safe-area-view"
  ],
  //...
}
```

## Usage

⚠️ In order to avoid name collision (`SafeAreaView` is already defined in React
Native), the components are scoped in `SafeArea`. Checkout this example :

```rescript
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

```rescript
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
[contribution guidelines](https://github.com/rescript-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/rescript-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
