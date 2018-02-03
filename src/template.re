let make = (~content, ~title, ()) => {j|
  <!DOCTYPE html>
    <html>
      <head>
        <title>$title</title>
      </head>
      <body>
        <div id="react-root">$content</div>
      </body>
    </html>
|j};
