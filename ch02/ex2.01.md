/* Exercise 2.01: Valid C identifier
 * Kevin Yu, 2023
 */

Any valid C identifier must begin with a letter or underscore (_), then can use any combination of digits, letters and underscore; and nothing else.

| Identifier             | Valid?   | Notes                                                    |
|------------------------|----------|----------------------------------------------------------|
| _hello                | valid    | begins with underscore, then uses only letters          |
| Hello37               | valid    | begins with a letter, then uses only letters and digits  |
| constant-value        | invalid  | uses `-`, not a digit, letter, or underscore             |
| subject#1             | invalid  | uses `#`, not a digit, letter, or underscore             |
| n                     | valid    | just a letter. While valid, not necessarily a good name. |
| M                     | valid    | just a letter                                             |
| km_per_hour           | valid    | letter followed by letters and underscores               |
| speed!                | invalid  | uses `!`, not a digit, letter, or underscore             |
| sensible$name         | invalid  | uses `$`, not a digit, letter, or underscore             |
| _num_incorrect_       | valid    | begins with underscore, then uses only letters and underscores |
| big_long_name_many_letters | valid    | begins with underscore, then uses only letters and underscores |
| 12oclock              | invalid  | begins with a digit                                      |