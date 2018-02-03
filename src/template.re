let make = (~content, ~title, ()) => {j|
  <!DOCTYPE html>
    <html>
      <head>
        <title>$title</title>
      </head>
      <body>
        <div id="react-root">$content</div>
        <script src="/assets/bundle.js"></script>
      </body>
    </html>
|j};
