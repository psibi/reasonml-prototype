let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: self => <div> (ReasonReact.stringToElement("Hello world")) </div>
};
