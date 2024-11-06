module.exports = {
  devServer: {
    hot: false, // Desativa o Hot Module Replacement
  },
  configureWebpack: {
    resolve: {
      alias: {
        vue$: "vue/dist/vue.esm-bundler.js",
      },
    },
    // Adicionando as feature flags necessárias
    plugins: [
      new (require("webpack").DefinePlugin)({
        __VUE_PROD_DEVTOOLS__: JSON.stringify(false),
        __VUE_OPTIONS_API__: JSON.stringify(true),
        __VUE_PROD_HYDRATION_MISMATCH_DETAILS__: JSON.stringify(false),
      }),
    ],
  },
};
