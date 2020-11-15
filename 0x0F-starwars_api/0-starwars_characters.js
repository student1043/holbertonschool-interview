#!/usr/bin/node
const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2] + '/?format=json';
request(url, function (err, response, body) {
  if (err) throw err;
  const json = JSON.parse(body);
  let i = 0;
  let chars = []
  for (i = 0; i < json.characters.length; i++) {
    const url1 = json.characters[i];
    request(url1, function (err, response, data) {
      if (err) throw err;
      let json1 = JSON.parse(data);
      chars.push(JSON.stringify(json1.name));

    });
  }
  console.log(chars);
});
