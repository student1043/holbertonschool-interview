#!/usr/bin/node
const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2] + '/?format=json';
request(url, function (err, response, body) {
  if (err) throw err;
  const json = JSON.parse(body);
  let i = 0;
  for (i = 0; i < json.characters.length; i++) {
    const url1 = json.characters[i];
    request(url1, function (err, response, data) {
      if (err) throw err;
      const json1 = JSON.parse(data);
      console.log(json1.name);
    });
  }
});
