[@bs.module] external slider : ReasonReact.reactClass = "react-slick";

let make =
    (
      ~dots: bool,
      ~infinite: bool,
      ~speed: int,
      ~slidesToShow: int,
      ~slidesToScroll: int,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=slider,
    ~props={
      "dots": Js.Boolean.to_js_boolean(dots),
      "infinite": Js.Boolean.to_js_boolean(infinite),
      "speed": speed,
      "slidesToShow": slidesToShow,
      "slidesToScroll": slidesToScroll
    },
    children
  );
