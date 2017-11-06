Compiling
---------

Either `cd ext/greeting` and run `ruby extconf.rb` and make yourself, or just run
`make && make install`

    $ irb
    >> require 'greeting'
    >> Greeting.morning
    => "Good morning!"

Told you it was simple!