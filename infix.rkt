(define-syntax infix
    (syntax-rules ()
      [(infix a f b)
       (f a b)]
      [(infix a f b c)
       (f a b c)])
    )
