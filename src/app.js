// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Main        = require("./Main.js");
var React       = require("react");
var LogoSvg     = require("./logo.svg");
var ReasonReact = require("reason-react/src/ReasonReact.js");

((require('./app.css')));

((require('slick-carousel/slick/slick.css')));

((require('slick-carousel/slick/slick-theme.css')));

var component = ReasonReact.statelessComponent("App");

function make(message, _) {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", {
                  className: "App"
                }, React.createElement("div", {
                      className: "App-header"
                    }, React.createElement("img", {
                          className: "App-logo",
                          alt: "logo",
                          src: LogoSvg
                        }), React.createElement("h2", undefined, message)), React.createElement("p", {
                      className: "App-intro"
                    }, "To get started, edit", React.createElement("code", undefined, " src/app.re "), "and save to reload."), ReasonReact.element(/* None */0, /* None */0, Main.make(/* array */[])));
    });
  return newrecord;
}

exports.component = component;
exports.make      = make;
/*  Not a pure module */
