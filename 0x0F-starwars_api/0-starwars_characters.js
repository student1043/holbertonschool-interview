#!/usr/bin/node
const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];
request(url, function (error, response, body) {
  if (error) return;
  const d = JSON.parse(body).characters;
  printer(d, 0);
});

function printer (characters, index) {
  request(characters[index], function (error, response, body) {
    if (error) return;
    console.log(JSON.parse(body).name);
    if (index + 1 < characters.length) {
      printer(characters, index + 1);
    }
  });
}
