type route =
  | Home
  | Hello
  | Bye;

type state = {currentRoute: route};

let component = ReasonReact.reducerComponent("Main");

let str = ReasonReact.stringToElement;

let handleRoute = (currentRoute: route) => {
  Js.log("inside handle route");
  switch currentRoute {
  | Home => <Page message="This is home page" />
  | Hello => <HelloWorld />
  | Bye => <Page message="bye bye!" />
  };
};

let make = _children => {
  ...component,
  initialState: () => {currentRoute: Home},
  reducer: (action, state) =>
    switch action {
    | Home => ReasonReact.Update({currentRoute: Home})
    | Hello => ReasonReact.Update({currentRoute: Hello})
    | Bye => ReasonReact.Update({currentRoute: Bye})
    },
  subscriptions: self => [
    Sub(
      () =>
        ReasonReact.Router.watchUrl(url =>
          switch url.hash {
          | "hello" =>
            Js.log("hello");
            self.send(Hello);
          | "bye" => self.send(Bye)
          | _ =>
            Js.log("wildecard");
            self.send(Home);
          }
        ),
      ReasonReact.Router.unwatchUrl
    )
  ],
  render: self =>
    <div>
      <a href="#hello"> (str("Hello world")) </a>
      <br />
      <a href="#bye"> (str("Bye")) </a>
      (handleRoute(self.state.currentRoute))
      <br />
      <PersonalInformation name="hello" />
      <Slider
        dots=true infinite=false speed=500 slidesToShow=1 slidesToScroll=1>
        <div> <h3> (str("1")) </h3> </div>
        <div> <h3> (str("2")) </h3> </div>
        <div> <h3> (str("3")) </h3> </div>
        <div> <h3> (str("4")) </h3> </div>
        <div> <h3> (str("5")) </h3> </div>
        <div> <h3> (str("6")) </h3> </div>
      </Slider>
    </div>
};
