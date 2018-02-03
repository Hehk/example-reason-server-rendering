let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => <div> (ReasonReact.stringToElement("Hello from Reason React")) </div>
};
