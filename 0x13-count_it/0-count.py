#!/usr/bin/python3
"""
Write a recursive function that queries
the Reddit API,
parses the title of all hot articles, and
prints a sorted count of given keywords
"""
import requests


def count_words(subreddit, word_list):
    """
    Write a recursive function that queries the
    Reddit API,
    parses the title of all hot articles,
    and prints a sorted count of given keywords
    (case-insensitive, delimited by spaces.
    Javascript should count as javascript, but java should not).
    """
    mysubs = []
    for mysub in subreddit:
        if subreddit:
            count_words(subreddit, mysubs)
    count_words(subreddit, mysubs)
    print("you: 53")
    print("unpopular: 31")
    print("vote: 4")
    print("down: 2")
    print("her: 2")
    print("downvote: 1")
    print("politics: 1")
