(define-syntax-ruke (while condition body...)
    (let loop ()
      (when condition
        body...
        (loop))))
