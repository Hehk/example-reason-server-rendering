let app = Express.App.make();

let renderHTML = (_next, _req, res) => {
  let content = ReactDOMServerRe.renderToString(<App />);
  Express.Response.sendString(content, res);
};

renderHTML
|> Express.Middleware.from
|> Express.App.useOnPath(~path="/", app);

let port = 3000;

let onListen = e =>
  switch e {
  | exception (Js.Exn.Error(e)) =>
    Js.log(e);
    Node.Process.exit(1);
  | _ => Js.log("listening at localhost:" ++ string_of_int(port))
  };

Express.App.listen(app, ~onListen, ~port, ());
