const webpack = require("webpack");
const path = require("path");

const dir = p => path.resolve(__dirname, p);
module.exports = {
  entry: dir("src/browser.bs.js"),
  output: {
    path: dir("assets"),
    publicPath: "/",
    filename: "bundle.js"
  },
  module: {
    loaders: [
      {
        test: /\.js$/,
        exclude: /node_modules/
      }
    ]
  },
  resolve: {
    extensions: [".js", ".bs.js"]
  }
};
