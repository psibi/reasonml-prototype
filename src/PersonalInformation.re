/* PersonalInformation.re */
[@bs.module "./PersonalInformation.jsx"]
external jsPersonalInformation : ReasonReact.reactClass = "default";

let make = (~name: string, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=jsPersonalInformation,
    ~props={"name": name},
    children
  );
