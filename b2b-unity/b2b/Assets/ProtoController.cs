using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtoController : MonoBehaviour
{

    [SerializeField]
    GameObject Player;
    [SerializeField]
    GameObject Deck;
    [SerializeField]
    Sprite SpriteWalk;
    [SerializeField]
    Sprite SpriteDance;

    [SerializeField]
    Sprite SpriteDj;


    float timer = 0.0f;


    // Start is called before the first frame update
    void Start()
    {
        startTransition(Player, Deck);
    }

    // Update is called once per frame
    void Update()
    {

        int seconds = updateTimer();

        if (seconds == 3)
        {
            endTransition(Player, Deck, true);
        }

        if (seconds == 8)
        {
            startTransition(Player, Deck);
        }

        if (seconds == 12)
        {
            endTransition(Player, Deck, false);
        }

    }

    int updateTimer()
    {
        timer += Time.deltaTime;
        int seconds = (int)(timer % 60);

        return seconds;
    }

    void startTransition(GameObject player, GameObject deck)
    {
        deck.SetActive(false);
        player.GetComponent<SpriteRenderer>().sprite = SpriteWalk;
    }

    void endTransition(GameObject player, GameObject deck, bool isDance)
    {
        deck.SetActive(!isDance);

        if (isDance)
        {
            player.GetComponent<SpriteRenderer>().sprite = SpriteDance;
        }
        else
        {
            player.GetComponent<SpriteRenderer>().sprite = SpriteDj;
        }
    }
}
